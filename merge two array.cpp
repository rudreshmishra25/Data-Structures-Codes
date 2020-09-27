#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int a[]={1,12,15,26,38};
	int b[]={2,13,24};
	int re[8],i,j;
	 i=0;
	 j=0;
	int k=0;
	while(j<3 && i <5){
		if (a[i]>b[j]){
			re[k]=b[j];
			j++;
		}
		else
		{
			re[k]=a[i];
			i++;
		}
		k++;
	}
	for(int r=0;r<8;r++){
		cout<<re[r]<<" ";
	}
}
