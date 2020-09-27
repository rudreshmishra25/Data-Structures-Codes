#include<iostream>
using namespace std;
int main()
{
int x=1,*p;
p=&x;
int &y=x;
cout<<y<<" "<<&y<<" "<<p<<" "<<*p;
}
