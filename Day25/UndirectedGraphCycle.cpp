class Solution {
    bool dfs(vector<int> adj[],int sv,vector<bool>& visited,int parent){
        visited[sv]=true;
        for(int neighbor:adj[sv]){
            if(!visited[neighbor]){
                bool ans=dfs(adj,neighbor,visited,sv);
                if(ans==true) {
                    return true;
                }
            }else if(neighbor!=parent) return true;
        }
        return false;
    }
  public:
    bool isCycle(int V, vector<vector<int>>& edges) {
        vector<int> adj[V];
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool> visited(V,false);
        for(int i=0;i<visited.size();i++){
            if(!visited[i]){
                bool output=dfs(adj,i,visited,-1);
                if(output){
                    return true;
                }
            }
        }
        return false;
    }
};