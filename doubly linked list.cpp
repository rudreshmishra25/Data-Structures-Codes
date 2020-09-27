#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *prev;
	node *next;
}*first=NULL;

void create(int a[], int n)
{ node *t , *temp;
int i;	
	first=new node;
	first->data=a[0];
	first->next=NULL;
	first->prev=NULL;
	temp=first;
	for (i=0; i<n-1;i++){
		t= new node;
		t->data=a[i+1];
		t->next=NULL;
		t->prev=temp;
		temp->next=t;
		temp=t;
		
	}

}
void display(node *p){
	while(p){
		cout<<p->data<<endl;
		p=p->next;
		if(p->next==NULL){
			break;
		}
}
	cout<<p->data<<endl;
/*		for reverse order	
	while(p!=NULL){
		cout<<p->data<<endl;
		p=p->prev;
	}*/
}
//function to add element in front
node *addFront(int n ,node *first){
	node *t , *temp;
	temp=first;
	t=new node;
	t->data=n;
	t->prev=NULL;
	t->next=temp;
	temp->prev=t;
	return t;
}
int main(){
	node *t;
	int a[6]={1,2,4,5,6,3};
	create(a,6);
	//display(first);
	t=addFront(20,first);
	display(t);
}
