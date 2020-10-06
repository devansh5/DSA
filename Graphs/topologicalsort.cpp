// let say each dependecies to decide which to install first then the b
// build system makes a directed graph and check the order and sort in topological order


void topologicalsort(int V,vector<int>adj[],int source,bool visited[],stack<int>&s){
    visited[source]=true;
    for(auto x:adj[source]){
        if(visited[x]){
            continue;
        }
        topologicalsort(V,adj,x,visited,s);
    }
    s.push(source);
}



vector<int> topoSort(int V, vector<int> adj[]) {
    // Your code here
    vector<int>v;
    bool *visited=new bool[V];
    for(int i=0;i<V;i++){
        visited[i]=false;
    }
    stack<int>s;
    
    for(int i=0;i<V;i++){
        if(!visited[i]){
            topologicalsort(V,adj,i,visited,s);
        }
        
    }
    while(!s.empty()){
        int x=s.top();
        s.pop();
        v.push_back(x);
    }
    
    return v;
}
