#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[]={1,2,3,4,5,6,7,8};
	int k ;
	cin>>k;
	int n=8;
	int arr1[n];
	for(int i=0; i<n; i++){
		if(k>n)
		k%=n;
		//left rotate
		arr1[i]=arr[(i+k)%n];
		//right
		//arr1[i]=arr[(i+n-k)%n];
	}
	for(int i=0; i<n; i++){
		cout<<arr1[i]<<" ";
	}
}
