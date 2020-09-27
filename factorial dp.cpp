#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>> n;
	int ar[n]={1,1};
	for(int i=2; i<=n ; i++){
		ar[i]= i * ar[i-1];
		
	}

	{
	cout<<ar[n];}
}
