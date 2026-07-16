class Solution {
    void dfs(vector<vector<int>>& edges,int sv,vector<bool>& visited){
        visited[sv]=true;
        for(int neighbour:edges[sv]){
            if(!visited[neighbour]){
                dfs(edges,neighbour,visited);
            }
        }
    }
  public:
    int countConnected(int V, vector<vector<int>>& edges) {
        //convert list of edges into adjacency list
        vector<vector<int>> adj(V);
        for (int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int count=0;
        vector<bool> visited(V,false);
        for(int i=0;i<V;i++){
            if(!visited[i]){
                dfs(adj,i,visited);
                count++;
            }
        }
        return count;
    }
};