#include<bits/stdc++.h>
using namespace std;
void count(int n , int k=1)
{
	if (n<1){
		return ;
		
	}
	cout<<k<<endl;
	count(n-1,k+1);
}
int main(){
	count(10);
}
