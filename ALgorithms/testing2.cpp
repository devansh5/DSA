// The technique can be best understood with the window pane in bus, consider a window of length n and the pane which is fixed in it of length k.
// Consider, initially the pane is at extreme left i.e., at 0 units from the left.
// Now, co-relate the window with array arr[] of size n and plane with current_sum of size k elements. 
// Now, if we apply force on the window such that it moves a unit distance ahead. 
// The pane will cover next k consecutive elements

// Given an array(n) we have to find the maximum sum of array of given size =k

// time complexity-O(n)

#include<bits/stdc++.h>

using namespace std;

void print(vector <int> v){
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	} 
}


int main(){
	int n;
	vector <int> v;
	cin>>n;
	for(int i=1;i<n;i++)
	{

		v.push_back(i);
	}
	print(v);
	// int k;
	// cin>>k;
	// int c=Max_sum(arr,size,k);
	// cout<<"Maximum sum of the array is: "<<c<<endl;
	return 0;
}
