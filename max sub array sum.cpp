#include<bits/stdc++.h>
using namespace std;
int main(){
	int ar[]={-2,1,4,-1,-2,1,5,-3};
	int mxsum=0;
	int check=INT_MIN;
	for(int i =0; i<8;i++){
		mxsum+=ar[i];
		if(check<mxsum){
			check=mxsum;
		}
		if(mxsum<0)
		{
			mxsum=0;
		}
	}
	cout<<check;
}
