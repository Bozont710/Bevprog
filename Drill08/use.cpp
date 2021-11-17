#include "my.h"
#include "my.cpp"

namespace X {
	double var;
	void print(){
		cout << "X: " << var << '\n';
		return;
	}
}

namespace Y {
	double var;
	void print(){
		cout << "Y: " << var << '\n';
		return;
	}
}

namespace Z {
	double var;
	void print(){
		cout << "Z: " << var << '\n';
		return;
	}
}
int main(){
	/*foo = 7;
	print_foo();
	print(99);

	int x = 7;
	int y = 9;
	
	cout << "default use.cpp: " << x << '\t' << y << '\n';
	
	swap_r(x, y);
	cout << "after use.cpp2: " << x << '\t' << y << '\n';
	swap_v(7, 9);

	const int cx = 7;
	const int cy = 9;

	cout << "default use.cpp3: " << cx << '\t' << cy << '\n';

	swap_v(cx, cy);
	cout << "after use.cpp4: " << cx << '\t' << cy << '\n';
	swap_cr(7.7, 9.9);

	double dx = 7.7;
	double dy = 9.9;

	cout << "default use.cpp5: " << dx << '\t' << dy << '\n';

	swap_v(dx, dy);
	cout << "after use.cpp6: " << dx << '\t' << dy << '\n';
	swap_v(7.7, 9.9);*/

	X::var = 7;
	X::print();
	using namespace Y;
	var = 9;
	print();
	{
		using Z::var;
		using Z::print;
		var = 11;
		print();
	}
	print();
	X::print();
}