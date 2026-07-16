class Solution {
    bool toCheckPath(vector<vector<int>>& adj,int src,int dest,vector<bool>& visited){
        if(src==dest) return true;
        visited[src]=true;
        for(int neighbor:adj[src]){
            if(!visited[neighbor]){
                if(toCheckPath(adj,neighbor,dest,visited)) return true;
            }
        }
    }
  public:
    bool checkPath(int V, vector<vector<int>>& edges, int src, int dest) {
       vector<vector<int>> adj(V);
       for(const auto& edge:edges){
           int u=edge[0];
           int v=edge[1];
           adj[u].push_back(v);
           adj[v].push_back(u);
       }
       vector<bool> visited(V,false);
       return toCheckPath(adj,src,dest,visited);
    }
};
