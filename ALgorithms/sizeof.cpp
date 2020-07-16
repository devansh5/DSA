#include <iostream>

using namespace std;

int main()

{
	int b[4];
	
	int *bp0=&b[0];
	
	int *bp1=&b[1];
	
	int *bp2=&b[2];
	
	
	cout<<bp0<<endl;
	cout<<bp1<<endl;
	cout<<bp2<<endl;
	
	return 0;
}
