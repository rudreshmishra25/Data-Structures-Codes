#include<bits/stdc++.h>
using namespace std;
void remove(string s){
	int i , j =0;
	for(i=0; i<s.size();i++){
		if(isalpha(s[i])==1){
			s[j]=s[i];
			j++;
		}
	}
		cout<<s;
	
}

bool checkPangram (string &str)
{
    int check[26]={ 0 };
    int i=0;
    int len = str.size();
    for(i=0 ; i<len; i++){
        if (isalpha(str[i])){
        check[int(str[i]-97)]+=1;
        }
    }
    for(i=0; i<len; i++){
        if(check[i]==0)
        return false;
        
    }
    return true;
}

int main()
{
	string s="Rugadjysd243423432kjsdfhsd3423";
	remove(s);
}





