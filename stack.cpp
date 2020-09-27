#include<bits/stdc++.h>
using namespace std;
struct Stack{
	int top,size ;
	unsigned capacity;
	int *array;
	
};
void pop(Stack *s){
	s->top=s->top-1;
	cout<<s->array[s->top]<<" ";
	s->size=s->size+1;
}

void push(Stack *s, int item){
	s->array[s->top]=item;
	s->top=s->top+1;
	s->size=s->size+1;
	
}
Stack *createStack(unsigned c){
	Stack *s = new Stack;
	s->capacity=c;
	s->top=0;
	s->size=-1;
	s->array= new int [(s->capacity * sizeof(int))];
}
int main(){
	Stack *s;
	s=createStack(100);
	push(s,10);
	push(s,25);
	pop(s);
	push(s,11);
	pop(s);
	pop(s);
	
	
	
}
