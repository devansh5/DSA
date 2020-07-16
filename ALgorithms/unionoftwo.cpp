#include <iostream>

using namespace std;


void printUnion(int arr1[],int arr2[],int n ,int m)
{
	
	int i=0;
	int j=0;
	while(i<n && j<m)
	{
		if(arr1[i]<arr2[j])
		{
			i++;
			cout<<arr1[i]<<" ";
		}
		else if(arr1[i]>arr2[j])
		{
			j++;
			cout<<arr2[j]<<" ";
		}
		else{
			cout<<arr2[j]<<" ";
			i++;
			j++;
		}
	}
	while(i<n)
	{
		cout<<arr1[i++]<<" ";
	}
	while(j<m)
	{
		cout<<arr2[j++]<<" ";
	}
	
}
int main(){
	int arr1[]={1,2,3,4,5,6,6,7,7,8};
	int arr2[]={1,1,2,3,3};
	int n=sizeof(arr1)/sizeof(arr1[0]);
	int m=sizeof(arr2)/sizeof(arr2[0]);
	printUnion(arr1,arr2,n,m);
	
	return 0;
	
	
	
	
	
	
	
}
