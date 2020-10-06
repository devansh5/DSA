bool dfs(vector<int> g[],int V,bool visited[],int source,int parent){
    visited[source]=true;
    for(auto i:g[source]){
        if(!visited[i]){
            if(dfs(g,V,visited,i,source)){
                return true;
            }
        }
        else if(i!=parent){
            return true;
        }
    }
    return false;
}
    
bool isCyclic(vector<int> g[], int V)
{
   // Your code here
   
   
   bool *visited=new bool[V];
   for(int i=0;i<V;i++){
       visited[i]=false;
   }
   int source=0;
   int parent=-1;
    for(int i=0;i<V;i++)
    {
        if(visited[i]==false)
        {
           if(dfs(g,V,visited,source,parent))
           {
               return true;
           }
        }
    }
    return false;
}