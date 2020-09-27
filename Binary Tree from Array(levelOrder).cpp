#include<bits/stdc++.h>
using namespace std;
struct node{
    int data; 
    node *left, *right;
};

node *newNode(int data){
    node *root= new node;
    root->data= data;
    root->left=root->right=NULL;
    return(root);
}
node *insertNode(int arr[], node *root, int i, int n)
{
    if(i<n){
        node *temp = newNode(arr[i]);
        root=temp;
        
        root->left=insertNode(arr, root->left, 2*i+1, n);
        
        root->right=insertNode(arr, root->right, 2*i+2, n);
        
    }
    return root;
}


void inorder(node *root)
{
    if(root !=NULL){
        inorder(root->left);
        cout<<"Node==> "<<root->data<<" ";
        inorder(root->right);
    }
}

int main(){
    int arr[7]={1,2,3,4,5,6,7};
    
    node *root=insertNode(arr, root, 0 , 7);
    inorder(root);
}
