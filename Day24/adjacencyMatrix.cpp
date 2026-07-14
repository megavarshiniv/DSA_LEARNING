//timecomplexity:O(V^2)
//spacecomplexiyt:O(V^2)

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int V;
    cout<<"Enter the number of vertices:";
    cin>>V;
    int E;
    cout<<"Enter the number of edges:";
    cin>>E;
    //create a matrix of size(v+1)*(v+1)
    vector<vector<bool>>adj(V+1,vector<bool>(V+1,false));
    for(int i=1;i<=E;i++){
        int u,v;
        cout<<"Enter u and v:";
        cin>>u>>v;
        adj[u][v]=true;
        adj[v][u]=true;
    }
    //print the graph
    for(int i=1;i<=V;i++){
        for(int j=1;j<=V;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}