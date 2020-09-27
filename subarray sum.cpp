#include<bits/stdc++.h>
using namespace std;
int main(){
	int ar[]={1,2,3,4},sum=0,n=4;
	for(int i =0 ; i<4; i++){
		sum+=(ar[i]*(n-i)*(i+1));
		
	}
	cout<<sum;
}
