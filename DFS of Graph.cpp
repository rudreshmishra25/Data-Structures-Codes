// DFS
#include <bits/stdc++.h>

using namespace std; 


void createGraph(vector <int> adj[], int u , int v){
    adj[v].push_back(u);
    adj[u].push_back(v);
    
}
void dfsrec(vector<int> adj[], int s , bool visited[]){
    visited[s]=true;
    cout<<s<<" ";
    for(int u:adj[s])
    {
        if(visited[u]==false)
        dfsrec(adj, u , visited);
    }
}

void dfs(vector<int> adj[], int V , int s){
    bool visited[V];
    for(int i =0; i<V;i++){
        visited[i]==false;
    }
    dfsrec(adj,s,visited);
	

	 
}
    

int main(){
    vector<int> adj[5];
    createGraph(adj,0,1);
    createGraph(adj,0,2);
    createGraph(adj,1,3);
    createGraph(adj,1,4);
    createGraph(adj,3,4);
    dfs(adj,5, 0);
}
