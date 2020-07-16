#include <bits/stdc++.h> 

using namespace std;

int mergesort(int a[],int temp[],int l,int r);
int merge(int a[],int temp[],int l,int m,int r);

int inversion(int a[],int n){
    int temp[n];
    return mergesort(a,temp,0,n-1);
}


int mergesort(int a[],int temp[],int l,int r){
    int m,inv=0;
    if(l<r){
        m=(l+r/2);
        inv+=mergesort(a,temp,l,m);
        inv+=mergesort(a,temp,m+1,r);
        
        inv+=merge(a,temp,l,m+1,r);
    }
    return inv;
}

int merge(int a[],int temp[],int l,int m,int r)
{
    int i,j,k,inv;
    i=l;
    j=m;
    k=l;
    inv=0;
    
    while((i<=m-1)&&(j<=r))
	{
        if(a[i]<=a[j]){
            temp[k++]=a[i++];
        }
        else{
            temp[k++]=a[j++];
            inv+=(m-i);
        }
    }
    
    while(i<=m-1)
	{
        temp[k++]=a[i++];
    }
    
    while(j<=r)
	{
        temp[k++]=a[j++];
    }
        
    for(i=l;i<=r;i++){
        a[i]=temp[i];
        
    }
        
    return inv;
    
}


int main() 
{
    
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    
	    int x=inversion(a,n);
	    cout<<x<<endl;
	    
	}


    return 0;
}


// #include <iostream>
// using namespace std;

// int main()
// {

//     cout<<"hello world"<<endl;
//     return 0;
// }
