#include<bits/stdc++.h>
using namespace std;


void transPose(int a[][3]){
	for( int i=0;i<3;i++){
		for( int j=0;j<3;j++){
			a[i][j]=a[j][i];
		}
	}
}

void swap(int a[][3]){

	for (int i =0 ;i<3;i++){
		int t= a[0][i];
		a[0][i]=a[2][i];
		a[2][i]=t;
	}
	
}
int main(){
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}},i,j;
	
	
	transPose(a);
	swap(a);
	//transPose(a);
	//swap(a);
	
	
	
	for( i=0;i<3;i++){
		for( j=0;j<3;j++){
		
		cout<<a[i][j]<<" ";
		
	}
	cout<<endl;}
}
