#include<bits/stdc++.h>
using namespace std;	
int first(int arr[], int low , int high,int x){
	if(low<=high){
	
		 if (high >= low) { 
        int mid = low + (high - low) / 2; 
        if ((mid == 0 || x > arr[mid - 1]) && arr[mid] == x) 
            return mid; 
        else if (x > arr[mid]) 
            return first(arr, (mid + 1), high, x); 
        else
            return first(arr, low, (mid - 1), x); 
    } 
    return -1; 
}
}
int main(){
	int ar[7]={5,10,10,15,20,20,20};
	int index= first(ar,0 , 6,20);
	cout<<index;
}
