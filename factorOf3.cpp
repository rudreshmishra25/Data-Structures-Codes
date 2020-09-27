#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
	cin>>t;
	while(t--){
	ll n;
	cin>>n;
	ll arr[n];
	
	ll zero=0;
	ll one=0;
	ll two=0;
	
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
		arr[i]=(arr[i]%3);
		if(arr[i]==0)
		zero++;
		else if(arr[i]==1)
		one++;
		else
		two++;
	}
	if(zero>=two)
	{
		zero-=(two+1);
		if(one>=zero)
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
	}
	else if(zero<two)
	{
		if(one>0)
		{
			cout<<"NO\n";
		}
		else
		{
			cout<<"YES\n";
		}
	}
	else
	{
		cout<<"YES\n";
	}
	}
}
