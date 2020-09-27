#include<bits/stdc++.h>
using namespace std;
struct node{
	int key;
	node *left;
	node *right;
	
};


node *newNode(int key){
	node *root = new node;
	root->key=key;
	root->left=NULL;
	root->right=NULL;
	return root;
}

node *arrayToBst(int ar[],int low, int high){
	if (low>high)
		return NULL;
		int mid=(low+high)/2;
		node *root= newNode(ar[mid]);
		
		root->left= arrayToBst(ar,low,mid-1);
		
		root->right =arrayToBst(ar,mid+1,high);
		
		return root;	
}
void display(node *root)
{
	if (root==NULL)
	return ;
	cout<<root->key<<"  ";
	display(root->left);
	display(root->right);
}

int main(){
	node *root;
	int ar[7]={1,6,7,4,3,2,5};
	sort(ar,ar+7);
	root=arrayToBst(ar,0,6);
	display(root);
	
}
