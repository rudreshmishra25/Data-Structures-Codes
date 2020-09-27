#include <bits/stdc++.h> 
using namespace std; 
  


// function to find factorial of given number 
unsigned int factorial(unsigned int n) 
{ 
    if (n == 0) 
        return 1; 
    return n * factorial(n - 1); 
} 
  
// Driver code 
int main() 
{ 
    int a,b,c,k;
	cin>>c;
	for(int i=0;i<c;i++)
	{
		cin>>a>>b;
    	k=factorial(a);
    	cout<<k%7;
    return 0; 
} 
}
