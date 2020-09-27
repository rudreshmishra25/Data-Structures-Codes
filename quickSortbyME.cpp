#include<bits/stdc++.h>
using namespace std;

swap(int* c, int* b){
	int 	temp=*c;
	*c=*b;
	*b=temp;
}
int partition(int arr[], int low, int high){

	int pivot=arr[high];
	int i=low-1;
	for (int j=low;j<=high-1;j++){
		
		if (arr[j]<pivot)
		{
		i++;
		swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i+1],&arr[high]);
	return (i+1);
	
}

void quickSort(int a[], int l, int h){
	if (l<h)
	{
	int	pi=partition(a,l,h);
		quickSort(a,l,pi-1);
		quickSort(a,pi+1,h);
	}
}
void printArray(int a[], int n)
{
	for( int i=0;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main(){
	int a[5]={10,5,30,15,7},i;
	for (i=0;i<5;i++)
	{
		cout<<a[i]<<" "<<endl;
	}
	quickSort(a,0,4);
	printArray(a,4);
}
