
#include <bits/stdc++.h> 
using namespace std; 

bool sortf( pair<int,int> &a,   pair<int, int> &b){
    return (a.second<b.second);
}


int main()
{   pair<int, int > j1;
int count=0;
    j1={-1,-1};
    vector <pair<int, int> > job;
    int s, f ;
    for(int i=0 ;i<4; i++){
        cin>>s>>f;
        job.push_back({s,f});
        
    }
    sort(job.begin(), job.end(),sortf);
    for(auto j=job.begin(); j!=job.end();j++){
        if(j->first>=j1.second){
            j1.first=j->first;
            j1.second=j->second;
            count++;
        }
    }
    cout<<count;
}

