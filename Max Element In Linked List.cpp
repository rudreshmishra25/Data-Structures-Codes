#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *next;
}*first=NULL;


void create(int a[],int n){
	node *t, *last;
	int i;
	first=(node *)malloc(sizeof(node));
	first->data=a[0];
	first->next=NULL;
	last=first;
	for(i=1;i<n;i++)
	{
		t=(node *)malloc(sizeof(node));
		t->data=a[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}

	
}

void max(node *p){
	int c=1,count,num=-1;
	while(p)
	{
		if (p->data>num){
			num=p->data;
			count=c;
			
		}
		p=p->next;
		c++;
	}
	cout<<"Element "<<num<<endl;
	cout<<"Position "<<count;
}


int main()
{
	int a[20],i,n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	create(a,n);
	max(first);
}
