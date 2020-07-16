#include <bits/stdc++.h>

using namespace std;

void skipstrings(int arr[],int n)
{
	int count=0;
	for(int i=0;i<n-1;i++)
	{
		if(arr[i+1]!=arr[i])
		{
			int s=abs(arr[i+1]-arr[i])-1;
			count+=s;
		}
		


	}
	cout<<count<<endl;

}



int main()
{
	int t;
	cin>>t;
	if(1<=t<=10)
	{
		while(t--)
		{
			int n;
			cin>>n;
			bool s=false;
			if(2<=n<=pow(10,5))
			{
				int arr[n];
				for(int i=0;i<n;i++)
				{
					cin>>arr[i];


				}
				for(int i=0;i<n-1;i++)
				{
					if(arr[i]!=arr[i+1])
					{
						s=true;
					}
					else{
						s=false;
						break;
					}
				}
				if(s==true)
				{
					skipstrings(arr,n);
				}


				

			}
			
		}

	}
	

	return 0;
}