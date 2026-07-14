#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void bfs(vector<int>adj[],int sv,vector<bool>& visited){
    queue<int>q;
    q.push(sv);
    visited[sv]=true;
    while(!q.empty()){
        int front=q.front();
        q.pop();
        cout<<front<<" ";
        for(int neighbour:adj[front]){
            if(!visited[neighbour]){
                q.push(neighbour);
                visited[neighbour]=true;
            }
        }
    }
}
int main(){
    int V,E;
    cout<<"Enter the no of vertices and edges:";
    cin>>V>>E;
    vector<int>adj[V+1];
    for(int i=1;i<=E;i++){
        int u,v;
        cout<<"Enter u and v :";
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool>visited(V+1,false);
    bfs(adj,1,visited);
}