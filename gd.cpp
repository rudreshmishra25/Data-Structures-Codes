#include<bits/stdc++.h>
using namespace std; 
int  gcd(int a  , int b ){
	if(b==0)
		return a;
	else	
	return gcd(b , a%b);
	
}
int main(){
	int a=60;
	int b=20;
	cout<<a*b/gcd(a,b);
}
