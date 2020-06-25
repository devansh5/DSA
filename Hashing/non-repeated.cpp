// Hashing is very useful to keep track of the frequency of the elements in a list.

// You are given an array of integers. You need to print the non-repeated elements as they appear in the array.

// Input:
// The first line of input contains T denoting the number of testcases. T testcases follow. 
// Each testcase contains two lines of input. The first line contains n denoting the size of the array. 
// The second line contains n elements of the array.

// Output:
// For each testcase, in a new line, print the non-repeated elements in the order they appear in the array.

// Your Task:
// You don't need to read input or print anything. 
// You only need to complete the function printNonRepeated() that takes arr and n as parameters and 
// return the array which has the distinct elements in same order as they appear in input array. 
// The newline is appended automatically by the driver code.


vector<int> printNonRepeated(int arr[],int n)
{
    vector<int> ans;
    unordered_map<int,int> mp;
    
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
        
    for(int i=0;i<n;i++)
    {
        if(mp[arr[i]]==1)
        {
            ans.push_back(arr[i]);
        }
    }
    
    return ans;
        

}