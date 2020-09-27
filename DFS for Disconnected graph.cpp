// BFS
#include <bits/stdc++.h>

using namespace std; 


void createGraph(vector <int> adj[], int u , int v){
    adj[v].push_back(u);
    adj[u].push_back(v);
    
}
void dfsrec(vector<int> adj[],int s , bool visited[]){
    visited[s]=true;
    cout<<s<<" ";
    for(int x :adj[s]){
        if (visited[x]==false)
        dfsrec(adj, x , visited);
    }
    
}

void dfs(vector<int> adj[], int V){
    bool visited[V];
    for(int i =0 ; i<V;i++){
        visited[i]=false;
        
    }
    for(int i =0; i<V; i++){
        if (visited[i]==false)
        dfsrec(adj,i , visited);
    }
}

    

int main(){
    vector<int> adj[7];
    createGraph(adj,0,1);
    createGraph(adj,0,2);
    createGraph(adj,1,3);
    createGraph(adj,4,5);
    createGraph(adj,5,6);
    createGraph(adj,4,6);
    dfs(adj,7);
}
