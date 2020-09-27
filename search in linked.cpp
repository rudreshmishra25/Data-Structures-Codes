#include<bits/stdc++.h>
using namespace std;
struct node {
	int data;
	node *next;
}*first=NULL;

void create(int a[], int n){
	int i;
	node *t, *temp;
	first=new node;
	first->data=a[0];
	first->next=NULL;
	temp=first;
	for(i=1;i<n;i++){
		t= new node;
		t->data=a[i];
		t->next=NULL;
		temp->next=t;
		temp=t;
	}
}

void search(node *p){
	int count=0;
	int  key = 3;
	while(p!=NULL){
		if (p->data!=key)
		{
			count+=1;
			p=p->next;
		}
	else{
	
		
		break;}}
cout<<count<<endl;	

}
void display(node *p){
	while(p!=NULL)
	{
		cout<<p->data;
		p=p->next;
		
	}}
int main(){
	int a[6]={1,3,4,5,2,6};
	create(a,6);
	search(first);
	display(first);
	
}
