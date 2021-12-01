#include "../std_lib_facilities.h"

ostream& print_array10(ostream& os, int* a, int n)
{
	for (int i = 0; i < n; ++i)
		os << a[i] << ' ';
		os << endl;

	return os;
}

ostream& print_vector(ostream& os, vector<int>& v)
{
	for (int i = 0; i < v.size(); ++i)
		os << v[i] << ' ';
		os << endl;

	return os;
}

int main(){

	int* first = new int[10];
	int* fifth = new int[10] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109};
	int* sixth = new int[11] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110};
	int* eighth = new int[20]; //{100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120};

		int x = 100;
		for (int i = 0; i < 20; ++i){
			eighth[i] = x;
			++x;
		}
	

	print_array10(cout, first, 10);
	delete[] first;

	print_array10(cout, fifth, 10);
	delete[] fifth;

	print_array10(cout, sixth, 11);
	delete[] sixth;

	print_array10(cout, eighth, 20);
	delete[] eighth;
	
	vector<int> five = {100, 101, 102, 103, 104, 105, 106, 107, 108, 109};
	print_vector(cout, five);

	vector<int> six = {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110};
	print_vector(cout, six);

	vector<int> eight(20);
		int y = 100;
		for (int i = 0; i < eight.size(); ++i){
			eight[i] = y;
			++y;
		}

	print_vector(cout, eight);

	return 0;
}