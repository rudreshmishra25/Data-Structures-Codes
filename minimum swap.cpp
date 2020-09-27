#include<bits/stdc++.h>
using namespace std;

int main(){
vector <int> v;
string s="[]][][";
int i , count=0, idx=0, ans=0;
for(i=0; i<s.size();i++){
	if(s[i]=='['){
		v.push_back(i);
	}
}
for(i=0; i<s.size();i++){
	if(s[i]=='['){
		count++;
		idx++;
	}
	else if(s[i]==']'){
		count--;
	}
	if(count<0){
		ans+=v[idx]-i;
		char temp= s[i];
		s[i]=s[v[idx]];
		s[v[idx]]=temp;
		idx++;
		count=1;
	}
}
cout<<ans;
}
