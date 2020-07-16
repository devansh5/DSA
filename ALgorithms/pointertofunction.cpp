#include <iostream>
using namespace std;

// call by reference using the pointers

// void swapbyreference(int *x,int *y)
// {
// 	int temp;
// 	temp=*x;
// 	*x=*y;
// 	*y=temp;




// }

// call by value 

void swapbyvalue(int a,int b)
{

	a=10;
	b=20;
}


// void reference(int *x)
// {



// 	*x=20;



// }






int main()
{


	int x,y;

	x=10;
	y=50;

	cout<<"The initial value of x: "<<x<<endl;
	cout<<"The initial value of y: "<<y<<endl;

	// swapbyreference(&x,&y);
	swapbyvalue(x,y);

	cout<<"The value of x after swapping: "<<x<<endl;
	cout<<"The value of y after swapping: "<<y<<endl;

	// int a;

	// a=5;
	// cout<<&a<<endl;

	// a=a+1;




	// cout<<&a<<endl;

	// int p=10;


	// cout<<p<<endl;

	// reference(&p);

	// cout<<p<<endl;







	return 0;
}