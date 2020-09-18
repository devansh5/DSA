// Time Complexity
// O(k)+O(n-k)(logk)

#include<bits/stdc++.h>
using namespace std;


void heapify(int arr[],int n,int i)
{
    if(i>=n/2)
    {
        return;
    }
    int smallest=i;
    int left=(2*i+1);
    int right=(2*i+2);
    if(left<n && arr[left]<arr[smallest])
    {
        smallest=left;
    }
    if(right<n && arr[right]<arr[smallest])
    {
        smallest=right;
    }
    if(smallest!=i)
    {
        swap(arr[smallest],arr[i]);
        heapify(arr,n,smallest);
    }
    
}



int KthLargest(int arr[], int n, int k){
    // Your code here
    int size=(k-2)/2;
    for(int i=size;i>=0;--i)
    {
        heapify(arr,k,i);
    }
    for(int i=k;i<n;i++)
    {
        if(arr[0]<arr[i])
        {
            arr[0]=arr[i];
            heapify(arr,k,0);
        }
        else{
            continue;
        }
    }
    return arr[0];
}
