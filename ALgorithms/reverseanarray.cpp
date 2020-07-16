#include<iostream>
using namespace std;

void reversearray(int arr[],int n)
{
	int temp,left,right;
	
	left=0;
	right=n-1;
	
	while(left<right)
	{
		temp=arr[i];
		arr[i]=arr[n-1-i];
		arr[n-1-i]=temp;
		left++;
		right--;
	}
	return arr;
}







int main()
{




	return 0;

}