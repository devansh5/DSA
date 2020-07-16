// Counting 1s in binary representation of an integer
// Time complexity-(-)(logn)(Theta)

#include<iostream>
using namespace std;


unsigned int countset(unsigned int n)
{
	unsigned int count=0;

	while(n) //till all the bits become 0
	{
		count+=n & 1;
		n>>=1;
	}

	return count;

}
int main()
{

	int i=13;

	cout<<countset(i)<<endl;







	return 0;
}


// Recursive approach
