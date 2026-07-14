//time complexity:O(V+E)
//space complexity:O(V+E)

#include<iostream>
#include<vector>
using namespace std;
void dfs(vector<int>adj[],int start,vector<bool>&visited){
    visited[start]=true;
    cout<<start<<" ";
    //mark start as visited to avoid loop
    for(int neighbor:adj[start]){
        if(!visited[neighbor]){
            dfs(adj,neighbor,visited);
        }
    }
}
int main(){
    int V,E;
    cout<<"Enter the no of vertices and edges";
    cin>>V>>E;
    vector<int>adj[V+1];
    for(int i=1;i<=E;i++){
        int u,v;
        cout<<"Enter u and v";
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool>visited(V+1,false);
    dfs(adj,1,visited);
}