//BFS
#include <bits/stdc++.h>

using namespace std; 


void createGraph(vector <int> adj[], int u , int v){
    adj[v].push_back(u);
    adj[u].push_back(v);
    
}
void bfs(vector<int> adj[], int s, int v){
    bool visited[v+1];
    for(int i=0;i<v+1; i++){
        visited[i]=false;
    }
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

int main(){
    vector<int> adj[4];
    createGraph(adj,0,1);
    createGraph(adj,0,2);
    createGraph(adj,1,2);
    createGraph(adj,1,3);
    bfs(adj ,0 , 4);
}
