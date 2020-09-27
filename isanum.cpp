#include<bits/stdc++.h>
using namespace std;
int main(){
	string s="rudreshm@";
	int i =0;
	for( i = 0 ;i<s.size();i++){
		if(isalpha(s[i])){
			//cout<<i<<" ";
		}
	}for( i = 0 ;i<s.size();i++){
	
	if(isdigit(s[i])){
		//cout<<s[i];
	}}
	transform(s.begin(), s.end(),s.begin(),::toupper);
	//reverse(s.begin(),s.end());
	s.replace(0,3,"hel");
	cout<<s;
	s=s+"Rudr";
	cout<<endl;
	cout<<s;
}
