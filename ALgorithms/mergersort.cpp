#include<bits/stdc++.h>

using namespace std;

void merge(int arr[],int l,int m,int r)
{
    int n1=m-l+1;
    int n2=r-m;
    int L[n1],R[n2];
    L[n1]=INT_MAX;
    R[n2]=INT_MAX;
    for(int i=0;i<n1;i++)
    {
        L[i]=arr[l+i];
    }
    for(int j=0;j<n2;j++)
    {
        R[j]=arr[m+j+1];
    }
    int i=0;
    int j=0;
    for(int k=l;k<=r;k++)
    {
        if(L[i]<=R[j])
        {
            arr[k]=L[i];
            i+=1;
        }
        else
        {
            arr[k]=R[j];
            j+=1;
        } 1  
    }
}

void mergesort(int arr[],int l,int r)
{
    if(l<r)
    {
        int m=(l+r)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);

        merge(arr,l,m,r);
    }
}

int main()
{
    int arr[]={8,4,1,2,5,3,6,9,7};
    int n=sizeof(arr)/sizeof(arr[0]);

    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
