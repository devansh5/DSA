// breadth first search it is the same like level order traversal in cpp
// Iterative approach,like level order traversal in trees
// use a queue to maintain FIFO ordering and one array for checking the visited node 
// we will not consider the visited node while traversing the graph

// TIME COMPLEXITY
// O(V+E) (using adjacency list)
// Expected Auxiliary Space: O(V).

#include <bits/stdc++.h>

using namespace std;

vector <int> bfs(vector<int> g[], int N);

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> N >> E;
        vector<int> adj[N];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }
        vector <int> res = bfs(adj, N);
        for (int i = 0; i < res.size (); i++) cout << res[i] << " ";
        cout << endl;
    }
}
vector <int> bfs(vector<int> g[], int N) {

    // Your code here
    queue<int>q;
    vector<int>v;
    bool visited[N]={0};
    q.push(0);
    visited[0]=true;
    while(!q.empty())
    {
        int node=q.front();
        v.push_back(node);
        q.pop();
        for(auto x:g[node])
        {
            if(!visited[x]){
                q.push(x);
                visited[x]=true;
            }
        }
        
    }
    return v;
    
}
