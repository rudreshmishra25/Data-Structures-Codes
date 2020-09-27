#include<bits/stdc++.h>
using namespace std;
int main(){
string str1="bcadeh";
string str="hea";
string s =str1;
    int map[26]={ };
    int count =0;
    
    int len1= s.size();
    int len2= str.size();
 
    int i=0;
    for(i=0; i<len1; i++){
        map[abs(97-int(s[i]))] +=1;
    }
    for(i=0; i<len2; i++){
        map[abs(97-int(str[i]))] +=1;
    }
    for(i=0;i<26; i++){

        count = count + map[i]/2;
    }
    for(i=0; i<26;i++){
    	cout<<map[i]<<" ";
	}
    cout<<count;
}
