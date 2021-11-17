#include "my.h"
#include "std_lib_facilities.h"

int foo;

void print_foo(){
	cout << foo << '\n';
}
	
void print(int i){
	cout << i << '\n';
}

void swap_v(int a, int b){
	cout << "default my.cpp:swap_v: " << a << '\t' << b << '\n';
	int temp;
	temp = a;
	a=b;
	b=temp;
	cout << "after my.cpp:swap_v: " << a << '\t' << b << '\n';
	return;
}

void swap_r(int& a, int& b){
	cout << "default my.cpp:swap_r: " << a << '\t' << b << '\n';
	int temp;
	temp = a;
	a=b;
	b=temp;
	cout << "after my.cpp:swap_r: " << a << '\t' << b << '\n';
	return;
}

void swap_cr(const int& a, const int& b){
	int temp;
	int temp2;
	temp = a;
	temp2 = b;
	swap_r(temp, temp2);
	return;
}