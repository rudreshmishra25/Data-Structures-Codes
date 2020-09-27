#include<iostream>
#include<cstring>
using namespace std;
int main()
{
int i ,count=0;
char s[20];
cout<<"Enter string of length betwn 0-20";
gets(s);
for(i=0;i<20;i++)
{	if (s[i]=='\0')

			break;
	else
		count+=1;
}
cout<<count;
}
