#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{ 
if (b==0)
	{
		return a;
	}
	else
	{
		a=a%b;
		return gcd(b,a);
	}
	
}
int main()
{
	int a=3918848,b=1653264;
	cout<<gcd(a,b);
	return 0;
}
