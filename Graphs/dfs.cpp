#include<bits/stdc++.h>

using namespace std;


// Function to do dfs of a graph
// g : adjacency list of graph
// N : number of vertices

// return a list containing the DFS traversal of the given graph
// */


void dfsperform(vector<int>g[],int N,int source,bool visited[],vector<int>&result)
{
    visited[source]=true;
    result.push_back(source);
    for(auto i:g[source]){
        if(!visited[i]){
            dfsperform(g,N,i,visited,result);
        }
    }
}

vector <int> dfs(vector<int> g[], int N)
{
    
    // Your code here

    // making a dynamic array in cpp
    bool *visited = new bool[N];
    for (int i = 0; i < N; i++)
        visited[i] = false; 
    int source=0;
    vector<int>result;
    dfsperform(g,N,source,visited,result);
    
    return result;

}