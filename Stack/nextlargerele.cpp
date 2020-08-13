// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to store Next larger elements


vector <long long> nextLargerElement(long long arr[], int n){
    // Your code here
    stack<int>s;
    vector<long long>v;
    long long ng[n];
    for(int i=0;i<n;i++)
    {
        if(s.empty())
        {
            s.push(i);
            continue;
        }
        
        while(!s.empty() && arr[i]>=arr[s.top()])
        {
            ng[s.top()]=arr[i];
            s.pop();
        }
        
        
        s.push(i);
        
    }
    while(s.empty()==false)
    {
        ng[s.top()]=-1;
        s.pop();
    }
    for(int i=0;i<n;i++)
    {
        v.push_back(ng[i]);
    }
    return v;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        
        vector <long long> res = nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}
  // } Driver Code Ends


vector <long long> nextLargerElement(long long arr[], int n){
    // Your code here
    stack<int>s;
    vector<long long>v;
    long long ng[n];
    for(int i=0;i<n;i++)
    {
        if(s.empty())
        {
            s.push(i);
            continue;
        }
        
        while(!s.empty() && arr[i]>=arr[s.top()])
        {
            ng[s.top()]=arr[i];
            s.pop();
        }
        
        
        s.push(i);
        
    }
    while(s.empty()==false)
    {
        ng[s.top()]=-1;
        s.pop();
    }
    for(int i=0;i<n;i++)
    {
        v.push_back(ng[i]);
    }
    return v;
}