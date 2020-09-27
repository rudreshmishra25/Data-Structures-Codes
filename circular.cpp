#include<bits/stdc++.h>
using namespace std;
struct node{
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
	temp->next=first;
}
void display(node *p){
	node *q;
	q=p;
	cout<<p->data<<endl;
		q=q->next;
		while(q!=p){
			cout<<q->data<<endl;
			q=q->next;
	}

	
}

int main(){
	int a[6]={1,3,4,5,2,6};
	create(a,6);
	display(first);
	
}
