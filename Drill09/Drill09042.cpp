#include "../std_lib_facilities.h"

struct Date{
	int y, m, d;
	Date(int y, int m, int d);
	void add_day(int n);
};

Date::Date(int y, int m, int d)
{
	if (y < 1800 || y > 2200)
		cout << "Invalid year.\n";
	if (m < 1 || m > 12)
  		cout << "Invalid month.\n";
	if (d < 1 || d > 31)
  		cout << "Invalid day.\n";
 	else
 		{
  			Date::y = y;
  			Date::m = m;
  			Date::d = d;
 		}
	return;
}

void Date::add_day(int n)
{
 bool last = false;
 bool newyear = false;

  for (int i = 0; i < n; ++i)
 {
  if (Date::d == 31)
   last = true;
  Date::d = (Date::d == 31) ? 1 : ++Date::d;

  if (last)
  {
   last = false;
   Date::m = (Date::m == 12) ? 1 : ++Date::m;
   if (Date::m == 12)
    newyear = true;

   if (newyear)
   {
    newyear = false;
    ++Date::y;
   }

  }
  
 }

}

ostream& operator<<(ostream& os, const Date& d)
{
	return os << d.y << '.' << d.m << '.' << d.d;
}

int main(){

	Date today(1978, 6, 25);
	Date tomorrow(today);
	
	tomorrow.add_day(1);
	
	Date bad(12312, 312, -1);

	cout << "Today: " << today << '\n';
	cout << "Tomorrow: " << tomorrow << '\n';


	return 0;
}