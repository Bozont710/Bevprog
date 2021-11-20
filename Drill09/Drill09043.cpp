#include "../std_lib_facilities.h"

class Date
{
private:
 	int y, m, d;
public:
 	Date(int y, int m, int d);
 	void add_day(int n);

 	int month() { return m; }
 	int day() { return d; }
 	int year() { return y; }
};


Date::Date(int y, int m, int d)
{
 	if (y < 1800 || y > 2200)
		cout << "Error, invalid year." << endl;
	if (m < 1 || m > 12)
		cout << "Error, invalid month." << endl;
	if (d < 1 || d > 31)
		cout << "Error, invalid day." << endl;
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

ostream& operator<<(ostream& os, Date& d)
{
	return os << d.year() << '.' << d.month() << '.' << d.day();
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