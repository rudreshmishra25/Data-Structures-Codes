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

node *reverse(node *first){
	node *p=first,*q=NULL , *r=NULL;
	while(p){
		r=q;
		q=p;
		p=p->next;
		q->next=r;
	}
	return q;
	
}
void display(node *p){
	while(p!=NULL)
	{
		cout<<p->data<<endl;;
		p=p->next;
		
	}}

int main(){
	node *t;
	int a[6]={1,3,4,5,2,6};
	create(a,6);
	t=reverse(first);
	display(t);

	
}
