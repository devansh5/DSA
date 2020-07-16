#include <iostream>

using namespace std;


void shuffle(int arr[],int n)
{
	int i,j,mid;
	if(n%2==0)
	{
		mid=(n-1)/2;
		i=0;
		j=mid+1;
		while(i<=mid && j<=n-1)
		{
			cout<<arr[i]<<" "<<arr[j]<<" ";
			i+=1;
			j+=1;	
		}
		while(i<=mid)
		{
			cout<<arr[i]<<" ";
			i++;
		}
	}
	else
	{
		mid=(n-1)/2;
		i=0;
		j=mid;
		while(i<=mid-1 && j<=n-1)
		{
			cout<<arr[i]<<" "<<arr[j]<<" ";
			i+=1;
			j+=1;	
		}
		while(i<=mid-1)
		{
			cout<<arr[i]<<" ";
			i++;
		}
		while(j<=n-1)
		{
			cout<<arr[j]<<" ";
			j++;
		}

	}

}


int main()
{



	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		shuffle(a,n);
		cout<<endl;
	}
	

	return 0;
}