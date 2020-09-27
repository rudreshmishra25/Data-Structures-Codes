#include<bits/stdc++.h>
using namespace std;
struct book{
	int bookid;
	char title[20];
	float price;
	
}b2;
int main()
{
	book b1={100,"Rudresh",150.5};
	book b3,b4;
	b3.bookid=101;
	strcpy(b3.title,"Rudr");
	b3.price=250.15;
	
	b4=b3;
}
