// time complexity O(V+E)
// Space Complexity O(2n)

bool dfs(int V,int source,vector<int> adj[],bool visited[],bool recursion[]){
    if(!visited[source]){
        visited[source]=true;
        recursion[source]=true;
        for(auto x:adj[source]){
            if(!visited[x] && dfs(V,x,adj,visited,recursion)){
                return true;
            }
            else if(recursion[x]==true){
                return true;
            }
        }
    }
    recursion[source]=false;
    return false;
    
}


bool isCyclic(int V, vector<int> adj[])
{
    // Your code here
    bool *visited=new bool[V];
    for(int i=0;i<V;i++){
       visited[i]=false;
    }
    bool *recursion=new bool[V];
    for(int i=0;i<V;i++){
       recursion[i]=false;
    }
    for(int i=0;i<V;i++){
        if(!visited[i])
        {
            if(dfs(V,i,adj,visited,recursion)){
                return true;
            }
        }
    }
    return false;
}