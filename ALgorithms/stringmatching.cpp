// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

void follPatt(string );


 // } Driver Code Ends


void follPatt(string s)
{

	int l=s.length();
	int countx=0;
	int county=0;

	for(int i=0;i<l;i++)
	{
		if(s[i]=='x')
		{
			countx+=1;
		}
		else if(s[i]=='y' && s[i-1]=='x')
		{
			county+=1;
		}

	}
	if(countx==county)
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}

	cout<<endl;
}







int main() {
	int t;
	cin>>t;

	while(t--)
	{
	    
	    string s;
	    cin>>s;
	    follPatt(s);
	   
	}
	return 0;
} 

