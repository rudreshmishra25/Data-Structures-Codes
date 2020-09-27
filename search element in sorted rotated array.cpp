#include<bits/stdc++.h>
using namespace std;
int search(int ar[],int low , int high , int ele){
	if (low<=high){
		int mid=low+(high-low)/2;
		if(ar[mid]==ele){
			return mid;
		}
		if(ar[low]<ar[mid]){
			if(ele>=ar[low] && ele<=ar[mid])
			{
				search(ar, low, mid-1,ele);
				
			}
			else
			search( ar , mid+1 , high , ele);
			
		}
		else if(ar[mid]<ar[high]){
			if(ele>=ar[mid] && ele<=ar[high])
			{
				search(ar ,mid+1, high , ele );
				
			}
			else
			search(ar, low , mid-1, ele);
		}
		
	}
	else
	return -1;
}
int main(){
	int ar[]={100,500,10,20,30,40,50};
	int n = sizeof(ar)/sizeof(ar[0]);
	int s = search( ar, 0 , n-1, 30);
	cout<<s;
}
