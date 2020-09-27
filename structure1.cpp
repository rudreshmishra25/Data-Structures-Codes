#include<bits/stdc++.h>
using namespace std;
struct book{
	int bookid;
	char title[20];
	float price;
	
};
book input();
void display(book);
int main()
{
	book b1;
	b1=input();
	display(b1);
	
	
}
book input()
{
	book b;
	cin>>b.bookid>>b.title>>b.price;
	return(b);
}
void display(book b)
{
	cout<<b.bookid<<"\n"<<b.price<<"\n"<<b.title;
}
