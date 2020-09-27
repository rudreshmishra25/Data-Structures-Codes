#include<bits/stdc++.h>
using namespace std;
struct myHash{
	int bucket;
	list<int> *table;
	myHash(int b)
	{
		bucket = b;
		table=new list<int>[bucket];
		
	}
};

int main()
{
	return 0;
}
