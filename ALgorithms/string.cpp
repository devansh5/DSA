#include<iostream>

using namespace std;

int main()
{
	
	int arr[5]={1,2,3,4,5};
	int i=0 ,j=0 , m=0;
	
	i=++arr[1];
	j=arr[1]++;
	
	cout<<i<<" "<<j;
	
	return 0;
}
