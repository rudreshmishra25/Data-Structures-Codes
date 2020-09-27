//leader element --> no greater element on rightside OP-> 10 6 5 2
#include<bits/stdc++.h>
using namespace std;
void leader(int ar[], int n){
	int max=0;
	vector <int > v;
	v.push_back(ar[n-1]);
	max=ar[n-1];
	for(int i=n-2; i>=0;i--){
		if (max<ar[i]){
			max=ar[i];
			v.push_back(ar[i]);
		}
	}
	reverse(v.begin(), v.end());
	for(auto i = v.begin(); i!=v.end(); i++){
	    cout<<*i<<" ";
	}
}
int main(){
	int ar[]={7,10,4,3,6,5,2};
	int n=sizeof(ar)/sizeof(ar[0]);
	leader(ar,n);
	
}
