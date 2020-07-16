// The technique can be best understood with the window pane in bus, consider a window of length n and the pane which is fixed in it of length k.
// Consider, initially the pane is at extreme left i.e., at 0 units from the left.
// Now, co-relate the window with array arr[] of size n and plane with current_sum of size k elements. 
// Now, if we apply force on the window such that it moves a unit distance ahead. 
// The pane will cover next k consecutive elements

// Given an array(n) we have to find the maximum sum of array of given size =k

// time complexity-O(n)

#include<iostream>

using namespace std;

int Max_sum(int arr[],int n,int k){

	int max_sum=0;

	for(int i=0;i<k;i++){
		max_sum+=arr[i];
	}

	int window=max_sum;
	
	for(int i=k;i<n;i++){
		window+=arr[i]-arr[i-k];
		max_sum=max(window,max_sum);
	}
	return max_sum;


}


int main(){

	int arr[]={1,2,3,4,5,6,7,8,9};
	int size=sizeof(arr)/sizeof(arr[0]);
	int k;
	cin>>k;
	int c=Max_sum(arr,size,k);
	cout<<"Maximum sum of the array is: "<<c<<endl;
	return 0;
}
