#include<bits/stdc++.h>
using namespace std;
struct book{
		int bookid;
		float price;
		char title[20];
		
	};
book input();
void display(book);
int main()
{
	struct book b1;
	b1=input();
	display(b1);
	
	
 return 0;
}

book input()
{
	book b;
	cin>>b.bookid>>b.price>>b.title;
	return b;
}
void display(book b){
	cout<<b.bookid<<"\n"<<b.price<<"\n"<<b.title;
}
