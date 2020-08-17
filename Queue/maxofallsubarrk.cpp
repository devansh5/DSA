// maximum of all subarrays of size k using the implementation of deque
// MY IMPLEMENTATION WHICH IS FAILING AT ONE CASE
// vector <int> max_of_subarrays(int *arr, int n, int k){
//     // your code here
//     vector<int>v;
//     queue<int>q;
//     int max=INT_MIN;
//     for(int i=0;i<k;i++)
//     {
//         q.push(arr[i]);
//         if(max<arr[i])
//         {
//             max=arr[i];
//         }
        
//     }
//     v.push_back(max);
//     for(int i=k;i<n;i++)
//     {
        
//         q.pop();
//         if(max<arr[i])
//         {
//             max=arr[i];
//             v.push_back(max);
//         }
//         else{
//             v.push_back(max);
//         }
        
//         q.push(arr[i]);
        
        
        
//     }
//     return v;
// }


// we have to create double ended queue
#include <bits/stdc++.h>
using namespace std;

vector <int> max_of_subarrays(int *arr, int n, int k){
    // your code here
    vector<int>v;
    deque<int>q(k);
    int i;
    for(i=0;i<k;i++)
    {
        while(!q.empty()&&arr[i]>=arr[q.back()])
        {
            q.pop_back();
        }
        q.push_back(i);
    }
    for(;i<n;i++)
    {
        v.push_back(arr[q.front()]);
        
        while(!q.empty()&&q.front()<=i-k)
        {
            q.pop_front();
        }
        while(!q.empty()&&arr[i]>=arr[q.back()])
        {
            q.pop_back();
        }
        q.push_back(i);
    }
    v.push_back(arr[q.front()]);
    
    return v;
}
