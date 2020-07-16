#include <bits/stdc++.h>
#include <vector>
using namespace std;























int tastilevel(int a[],int n)
{
	int i=0;
	int j=n-1;
	int size=n;
	while(size>1)
	{
		if(a[i]>a[j])
		{
			i++;
			size--;
		}
		else{
			j--;
			size--;
		}
	}

	return a[i];



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
		cout<<tastilevel(a,n);
		cout<<endl;
	}
	

	return 0;
}