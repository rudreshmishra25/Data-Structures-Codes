#include <iostream>  
#include <cstring>  
using namespace std;  
int sum(int*,int*);
int main ()  
{
int a=5,b=6;
int s=sum(&a,&b);
cout<<"Sum is "<<s;
}
int sum(int *x,int *y)
{
	return (*x+*y);
}

