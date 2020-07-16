#include <iostream>
using namespace std;




void reverseno(long int n)
{
	long int rem=0;
	int c=0;
	while(n)
	{
		c=n%10;
		rem=rem*10+c;
		n=n/10;
	}
	cout<<rem;

}



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int n;
		cin>>n;
		reverseno(n);
		// cout<<"hello world";
		cout<<endl;
	
	}







	return 0;
}
