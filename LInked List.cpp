#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *next;
}*first=NULL;
void create(int a[],int n){
	int i ;
	node *t,*last;
	first=(node *)malloc(sizeof(node));
	first->data=a[0];
	first->next=NULL;
	last=first;
	for (i=1;i<n;i++)
	{
		t=(node *)malloc(sizeof(node));
		t->data=a[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}
void display(node *p){
	while(p!=NULL)
	{
		cout<<p->data;
		p=p->next;
		
	}

}
int main()
{
	int a[]={1,2,3,4,5};
	create(a,5);
	display(first);
	return 0;
	}
	
