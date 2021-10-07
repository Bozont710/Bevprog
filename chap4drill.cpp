#include "std_lib_facilities.h"
#include <iostream>
int main(){
	
	double one;
	//double two;
	//double three;
	double smallest;
	double largest;
	double sum = 0;
	string unit;
	string cm = "cm";
	string m = "m";
	string in = "in";
	string ft = "ft";
	string y = "y";
	string yard = "yard";
	string meter = "meter";
	string km = "km";
	string gallons = "gallons";
	vector <double> all;
	cout << "Please enter a number\n";
	while (cin >> one >> unit){
		//cout << sum << "\n";

		all.push_back(one);
		sum=one+sum;


	if (unit == cm ){
		one=one*0.01;
	}

	if (unit == m ){
		one=one*1;
	}

	if (unit == in ){
		one=one*0.0254;
	}

	if (unit == ft ){
		one=one*0.3048;
	}

	if (unit == y ){
		cout << "unit not recognised\n";
	}
	
	if (unit == yard ){
		cout << "unit not recognised\n";
	}

	if (unit == meter ){
		cout << "unit not recognised\n";
	}

	if (unit == km ){
		cout << "unit not recognised\n";
	}

	if (unit == gallons ){
		cout << "unit not recognised\n";
	}

	if (one < smallest){
		smallest=one;
		//three=two-one;
		cout << smallest << "m" << " is the smallest so far\n";
	}

	else if (one > largest){
		largest=one;
		//three=one-two;
		cout << largest << "m" << " is the largest so far\n";
	

	}
	}
	
	
	



	/*else if (one == two){
		cout << "The numbers are equal\n";
	}

	if (three <= 0.01)
		cout << "The numbers are almost equal\n";*/
	sort(all);
	cout << "The largest value: " << largest << "m\n" << "The smallest value: " << smallest << "m\n" << "The number of values entered: " << all.size() << "\n" << "The sum of the values: " << sum << "m\n" << "The values: " << all << "\n";

return 0;


}

