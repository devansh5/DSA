#include<iostream>
using namespace std;

int min(int arr[],int n)
{
	int minindex=0;
	for(int i=0;i<n;i++)
	{
		if (arr[minindex]>arr[i])
		{
			minindex=i;
		}
	}
	return minindex;
}
void swap(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		int k=min(arr,n);
		int temp=arr[i];
		arr[i]=arr[k];
		arr[k]=temp;
	}
	
}

int main()
{
	int arr[]={9,1,5,2,4,10,6,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	swap(arr,n);
		
	
}
