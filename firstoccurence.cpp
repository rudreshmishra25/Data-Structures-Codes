#include<bits/stdc++.h>
using namespace std;
int firstOcur(int ar[], int n , int low , int high, int ele){
	if(low<=high){
		int mid=low+(high-low)/2;
		if(ar[mid]==ele and (ar[mid-1]<ele or mid==0)){
			return mid;
		}
		if(ar[mid]==ele and ar[mid-1]==ele){
			firstOcur(ar, n , low, mid-1, ele);
		}
		if(ar[mid]>ele)
		{
			firstOcur(ar, n , low, mid-1, ele);
		}
		if(ar[mid]<ele){
			firstOcur(ar, n , mid+1, high, ele);
		}
	}
}
int main(){
	int ar[]={1,1,1,2,3,4,5,6,7,7,8,9,9,9,10};
	int n= sizeof(ar)/sizeof(ar[0]);
	int a= firstOcur(ar, n ,0 , n-1,1);
	cout<<a;
}
