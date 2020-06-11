#include<iostream>

using namespace std;

int peakelement(int arr[],int n)
{
    int l=0;
    int h=n-1;
    int mid=l+(h-l)/2;
    if(l>h)
    {
        return 1;
    }
    if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
    {
        return arr[mid];
    }
    else if(arr[mid]<arr[mid-1])
    {
        
    }
}

int main()
{
    



    return 0;
}