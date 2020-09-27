#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *next;
}*first=NULL;
void create(int a[], int n){
	int i;
	node *t,*temp;
	first=new node;
	first->data=a[0];
	first->next=NULL;
	temp=first;
for (i=1;i<n;i++)	{

	t= new node;
	t->data=a[i];
	t->next=NULL;
	temp->next=t;
	temp=t;

}
	
}
void display(node *p){
	while(p!=NULL)
	{
		cout<<p->data<<"==>";
		p=p->next;
		
	}}
	

int main(){
	int a[6]={1,4,5,6,2,8};
	create(a,6);
	display(first);
	
}
