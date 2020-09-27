#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *next;
	
}*first=NULL;


void create(int a[], int n)
{   node *t, *last;
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

 add(node *p)
{int  sum=0;
	while(p)
	{
		sum+=p->data;
		p=p->next;
	}
 return sum;}
int main()
{
	int a[]={1,2,3,4,5};
	int b;
	create(a,5);
	b=add(first);
	cout<<b;
}
