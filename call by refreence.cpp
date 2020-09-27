#include<iostream>
using namespace std;
void swap(int &,int &);
int main()
{
	int a,b;
	cout<<"Enter Value Of A:";
	cin>>a;
	cout<<"Enter Value of B:";
	cin>>b;
	cout<<"Before swapping\nValue of A is "<<a<<"\nValue of B is "<<b;
	swap(a,b);
	cout<<"\nOutside function a0fter swapping\nValue of A is"<<a<<"\nValue of B is"<<b; 
}
void swap(int &a,int &b)
{
	int c;
	c=a;
	a=b;
	b=c;
	cout<<"\nInside function after swapping\nValue of A is"<<a<<"\nValue of B is"<<b;
}
