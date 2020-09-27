// LIST REPRESENTATION OF GRAPH
#include <bits/stdc++.h>

using namespace std; 


void createGraph(vector <int> adj[], int u , int v){
    adj[v].push_back(u);
    adj[u].push_back(v);
    
}
void display(vector<int> adj[], int V){
   
	
	for(int i =0 ;i<V; i++){
	  
		for(int x: adj[i])
			cout<<"NODE"<<i<<"==>"<<x<<" ";
			
		cout<<endl;
	} 
}
    

int main(){
    vector<int> adj[4];
    createGraph(adj,0,1);
    createGraph(adj,0,2);
    createGraph(adj,1,2);
    createGraph(adj,1,3);
    display(adj,4);
}
