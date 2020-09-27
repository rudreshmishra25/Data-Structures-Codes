//BFS for DISCONNECTED Graph
#include <bits/stdc++.h>
using namespace std; 



void createGraph(vector <int> adj[], int u , int v){
    adj[v].push_back(u);
    adj[u].push_back(v);
    
}
void bfs(vector<int> adj[], int s, bool visited[]){
    
    queue<int>q ;
    visited[s]= true;
    q.push(s);
    while(q.empty()==false){
        int u = q.front();
        q.pop();
        cout<<u<<"-->";
        for(int x:adj[u]){
            if(visited[x]==false)
            {visited[x]=true;
            q.push(x);
            }
        }
    }
}
void bfsdis(vector<int> adj[], int  V){
    bool visited[V];
    //int count=0;
    for (int i=0;i<V;i++){
        visited[i]=false;
    }
    for(int i =0; i<V;i++){
        if(visited[i]==false)
        {
            bfs(adj, i , visited);
            //count++;
        }
    } //cout<<count; this will tell how many disconnected graph is there
}
int main(){
    int V=7;
    vector<int> adj[7];
    createGraph(adj,0,1);
    createGraph(adj,0,2);
    createGraph(adj,1,2);
    createGraph(adj,1,3);
    createGraph(adj,4,5);
    createGraph(adj,5,6);
    createGraph(adj,4,6);
    
    bfsdis(adj , V);
}
