#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int l,int m ,int r)
{
	int i,j,k;
	int n1= m-l+1;
	int n2= r-m;
	
	int left[n1],right[n2];
	for (i=0;i<n1;i++)
	{
		left[i]=arr[l+i];	
	}
	
	for (j=0;j<n2;j++)
	{
		right[j]=arr[j+m+1];
	}
	
	i=0;
	j=0;
	k=l;
	while(i< n1&& j<n2)
	{
		if (left[i]<=right[j]){
		arr[k]=left[i];
		i++;}
		
		else{
			arr[k]=right[j];
			j++;
		}
		k++;
		
		
	}
	while (i < n1) { 
        arr[k] = left[i]; 
        i++; 
        k++; 
    } 
  
    
    while (j < n2) { 
        arr[k] = right[j]; 
        j++; 
        k++; 
    } 
} 

void mergesort(int a[],int l,int r){
	if (r>l)
	{
		int m= l+(r-l)/2;
		
		mergesort(a,l,m);
		mergesort(a,m+1,r);
		merge(a,l,m,r);
	}
}


  
int main()
{
	int a[5]={10,5,30,15,7},i;
	mergesort(a,0,4);
	for (i=0;i<5;i++)
	{
		cout<<a[i]<<",";
	}
}
