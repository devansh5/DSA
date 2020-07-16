#include<iostream>

using namespace std;

int main()
{
	
	int arr[]={1,2,3,5};
	int n=sizeof(arr)/arr[0];
	int res=arr[0];
	for(int i=1;i<n;i++)
	{
		res=res^arr[i];
	}
	cout<<;
	return 0;
}
