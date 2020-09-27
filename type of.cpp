#include<iostream>
#include<typeinfo>
using namespace std;
int main(){
	int a=10;
	cout<<typeid(a).name();
}
