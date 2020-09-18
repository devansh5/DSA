#include<bits/stdc++.h>
using namespace std;


void adjlist(vector<int>adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printgraph(vector<int>adj[],int V)
{
    for(int v=0;v<V;v++)
    {
        for(auto x:adj[v])
        {
            cout<<" => "<<x;
        }
        cout<<endl;
    }
}

int main(){
    int V=5;
	vector<int>adj[V];
	adjlist(adj,0,1);
	adjlist(adj,0,4);
	adjlist(adj, 1, 2);
    adjlist(adj, 1, 3);
    adjlist(adj, 1, 4);
    adjlist(adj, 2, 3);
    adjlist(adj, 3, 4);
    printgraph(adj,V);

    return 0;
}