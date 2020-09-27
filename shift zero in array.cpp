#include<bits/stdc++.h>
using namespace std;

void shiftZero(int a[],int n)
{
	int count=0,i,temp=0;
	for(i=0;i<n;i++){
		if (a[i]!=0)
		{
			temp=a[count];
			a[count]=a[i];
			a[i]=temp;
			count++;
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<",";
	}
	
}
int main()
{
	int a[12]={0,1,2,0,6,7,0,0,10,0,8,11};
	shiftZero(a,12);
}
