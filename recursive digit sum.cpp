#include<bits/stdc++.h>
using namespace std;
int sum(int n){
	if (n<10){
		return n;
	}
	return sum(n/10)+n%10;
	

}
int check(int n){
	if (n>10){
		n=sum(n);
		
	}
	return sum(n);
}
int main(){
 cout<<check(148148148);
	
}
