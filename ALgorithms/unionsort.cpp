#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    //Your code here
    //return vector with correct order of elements
    vector<int> v;
    set<int> s;
    for(int i=0;i<n;i++)
    {
        s.insert(arr1[i]);
    }
    for(int i=0;i<m;i++)
    {
        if(s.find(arr2[i])==s.end())
        {
            s.insert(arr2[i]);
        }
    }
    copy(s.begin(),s.end(),back_inserter(v));
    sort(v.begin(),v.end());
    return v;
    
    
    
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		
		int arr1[n];
		int arr2[m];
		
		for(int i=0;i<n;i++)
		{
			cin>>arr1[i];
		}
		for(int i=0;i<m;i++)
		{
			cin>>arr2[i];
		}
		vector<int> ans=findUnion(arr1,arr2,n,m);
		
		for(int i=0;i<ans.size();i++)
		{
			cout<<ans[i]<<' ';
		}
		cout<<endl;
		
	}
	return 0;
}
