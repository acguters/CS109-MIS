#include "common.h"
#include "datatype.cpp"
using namespace std;

int main()
{
	NUMERIC x(1);
	cout << x.get() << endl;

	STRING y("hello", 5);
	cout << y.get() << endl;
	y.update(2, 'z');
	cout << y.get() << endl;



	return 0;
}