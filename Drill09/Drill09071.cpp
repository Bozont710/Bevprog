#include "../std_lib_facilities.h"

enum class Month{
	jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};

Month returnMonth(int month)

class Date {
	public:
	Date(int y, Month m, int d);
	void add_day(int n);
	int year() { return y; }
	Month month() { return m; }
	int day() { return d; }
private:
	int y;
	Month m;
	int d;
};

Date::Date(int y, Month m, int d)
{

	if (y < 1800 || y > 2200)
		cout << "Invalid year." << '\n';
	if (static_cast<int>(m) < 1 || static_cast<int>(m) > 12)
		cout << "Invalid month." << '\n';
	if (d < 1 || d > 31)
		cout << "Invalid day." << '\n';
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


	for (int i = 0; i < n; ++i){

		if (Date::d == 31)
		last = true;
		Date::d = (Date::d == 31) ? 1 : ++Date::d;  

		if (last)
		{

		last = false;
		int mon = (static_cast<int>(Date::m) == 12) ? 1 : (static_cast<int>(Date::m) + 1);
		newyear = true;

		if (newyear)
		{

		newyear = false;
		++Date::y;
	}

	}

}
}

Month returnMonth(int month)
{
	switch (month){
	case 1:
		return Month::jan;
		break;
	case 2:
		return Month::feb;
		break;
	case 3:
		return Month::mar;
		break;
	case 4:
		return Month::apr;
		break;
	case 5:
		return Month::may;
		break;
	case 6:
		return Month::jun;
		break;
	case 7:
		return Month::jul;
		break;
	case 8:
		return Month::aug;
		break;
	case 9:
		return Month::sep;
		break;
	case 10:
		return Month::oct;
		break;
	case 11:
		return Month::nov;
		break;
	case 12:
		return Month::dec;
		break;
	default:
		cout << "Bad month" << '\n';
	}

}


ostream& operator<<(ostream& os, Date& d)
{
	return os << d.year() << "." << static_cast<int>(d.month()) << "." << d.day();
}

int main(){

Date today(1978, Month::jun, 25);
Date tomorrow(today);

tomorrow.add_day(1);

cout << "Today: " << today << '\n';
cout << "Tomorrow: " << tomorrow << '\n';

	return 0;
}