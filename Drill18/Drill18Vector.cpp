#include "../std_lib_facilities.h"

vector<int> gv { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 } ;

void f(vector<int> n)
{
	vector<int> lv(10);
	
	for (int i = 0; i < n.size(); ++i)
	{
		lv[i] = n[i];
	}
	
	for (int i = 0; i < n.size(); ++i)
	{
		cout << lv[i] << ' ';
		cout << endl;
	}

	vector<int> lv2 = n;
	for (int i = 0; i < n.size(); ++i)
	{
		cout << lv2[i] << ' ';
		cout << endl;
	}	
}

int fac(int n) { return n > 1 ? n * fac(n - 1) : 1; }

int main(){

	f(gv);

	vector<int> vv(10);
	
	for (int i = 0; i < vv.size(); ++i)
	{
		vv[i] = fac(i + 1);
	}

	f(vv);

	return 0;
}