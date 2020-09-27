#include<bits/stdc++.h>
using namespace std;
void maxDiff(int ar[], int n){
	int res=ar[1]-ar[0];
	int minVal=ar[0];
	for(int i =1; i<n; i++){
		res= max(res, ar[i]-minVal);
		minVal = min(ar[i], minVal);
	}
	cout<<res;
}
int main(){
	int ar[]={2,3,10,6,4,8,1};
	int n = sizeof(ar)/ sizeof(ar[0]);
	maxDiff(ar, n);
	
}
