#include<bits/stdc++.h>
using namespace std;

bool ispalin(string str,int l, int h){
	if (l==h){
		return true;
		
	}
	if (l>h){
		return true;
	}
	if (str[l]!=str[h]){
		return  false;
	}
	ispalin(str,l+1,h-1);
	
}

int main()
{
	string s="aabaa";
	int n=s.size();
	int flag=ispalin(s,0,n-1);
	if (flag){
		cout<<"True";
	
	}
	else
		cout<<"False";
}
