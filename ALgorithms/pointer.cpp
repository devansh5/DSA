#include <iostream>

using namespace std;

void fun(int x)
{
	x = 30;
}

int main()
{
	int y = 20;
	cout << &y << endl;
	int *p = &y;
	cout << p << endl;
	cout << &p << endl;
	cout << *&p << endl;
	fun(y);
	cout << y << endl;
	return 0;
}

//	int x;
//	x=10;
//	int *ptr;
//
//	ptr=&x;
//
//	cout<<x<<endl;
//	cout<<*ptr<<endl;
//	cout<<&x<<endl;
//	cout<<ptr<<endl;

//	cout<<&ptr<<endl;
//	cout<<ptr<<endl;

//	cout<<&x<<endl;
//	cout<<x;


