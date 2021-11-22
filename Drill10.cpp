#include "std_lib_facilities.h"

struct point
{
	point(double xcoor, double ycoor)
  	: x(xcoor), y(ycoor) {}
	double x, y;
};

vector<point> original_points;
vector<point> processed_points;
string file = "mydata.txt";
ofstream outputfile{ file };
ifstream inputfile{ file };

ostream& operator<<(ostream& os, const vector<point>& p)
{
	for (int i = 0; i < p.size(); ++i)
		os << p[i].x << ' ' << p[i].y << '\n';
	return os;
}

ifstream& operator>>(ifstream& is, vector<point>& p)
{
	double x;
	double y;
	for (int i = 0; i < original_points.size(); ++i)
		{
		is >> x >> y;
		p.push_back(point(x, y));
		}
	return is;
}

void printvector(const vector<point>& p)
{
	for (int i = 0; i < p.size(); ++i)
		cout << "printvector X: " << p[i].x << " Y: " << p[i].y << '\n';
	return;
}

bool operator==(const vector<point>& p1, const vector<point>& p2)
{
	if (p1.size() != p2.size())
		return false;
	else 
		for (int i = 0; i < p1.size(); ++i)
		{
			if (p1[i].x != p2[i].x && p1[i].y != p2[i].y)
				return false;
		}
	return true;
}

int main(){

	double x;
	double y;

	cout << "Please enter seven points(X,Y): \n";
	
	for (int i = 0; i < 7; ++i)
	{
		cin >> x >> y;
		original_points.push_back(point(x, y));
	}

	printvector(original_points);
	outputfile << original_points;

	inputfile >> processed_points;
	printvector(processed_points);

	if (!(original_points == processed_points)){
		cout << "Something's wrong I can feel it!\n";
	}

	return 0;
}
