#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *next;
	node *prev;
	
	
}*first=NULL;

void create(int a[], int n){
	node *t , *temp;
	first = new node;
	first->data=a[0];
	first->prev=NULL;
	first->next=NULL;
	temp=first;
	
	for (int i =1 ; i<n; i++)
	{
		t= new node;
		t->data=a[i];
		t->prev=temp;
		t->next=NULL;
		temp->next=t;
		temp=t;
	}
	}
node *reverse(node *first){
	node *p=first, *r=NULL, *q=NULL;
	while(p){
		r=q;
		q=p;
		q->next=r;
		q->prev=p;
		p=p->next;
	}
	q->prev=NULL;
	return q;
}
void display(node *p){
	while(p){
		cout<<p->data;
		p=p->next;
	}
}
int main()
{
	int arr[5]={1,2,3,4,5};
	create(arr,5);
	display(first);
	//node *t=reverse(first);
	//display(t);
	 
	
}
