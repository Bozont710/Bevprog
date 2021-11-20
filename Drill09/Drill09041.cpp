#include "../std_lib_facilities.h"

struct Date{
	int y;
	int m;
	int d;
};

void init_day(Date& dd, int y, int m, int d)
{
	if (y < 1800 || y > 2200)
		cout << "Invalid year.\n";
	if (m < 1 || m > 12)
		cout << "Invalid month\n";
	if (d < 1 || d > 31)
		cout << "Invalid day\n";
	else 
		{
			dd.y = y;
			dd.m = m;
			dd.d = d;
		} 
	return;
}

void add_day(Date dd, Date& dd_copy, int n)
{
 bool last = false;
 bool newyear = false;

  for (int i = 0; i < n; ++i)
 {
  if (dd.d == 31)
   last = true;
  dd.d = (dd.d == 31) ? 1 : ++dd.d;

  if (last)
  {
   last = false;
   dd.m = (dd.m == 12) ? 1 : ++dd.m;
   if (dd.m == 12)
    newyear = true;

   if (newyear)
   {
    newyear = false;
    ++dd.y;
   }

  }
  
 }

 dd_copy = dd;
}


ostream& operator<<(ostream& os, const Date& d)
{
	return os << d.y << '.' << d.m << '.' << d.d;
}


int main(){

	Date today;
	Date tomorrow;
	Date bad;

	init_day(today, 1978, 06, 25);

	init_day(bad, -1233, 121, 32);
	
	add_day(today, tomorrow, 1);

	cout << today << '\n';
	cout << tomorrow << '\n';


	return 0;
}