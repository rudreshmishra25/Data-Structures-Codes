#include<bits/stdc++.h>
using namespace std;
struct Queue{
	int front,rear,size;
	unsigned capacity;
	int *array;
};
Queue *createQueue(unsigned c){
	Queue *q= new Queue;
	q->capacity=c;
	q->front=q->size=0;
	q->rear=c-1;
	q->array= new int[(q->capacity * sizeof(int))];
	return q;
}
bool isfull(Queue *q)
{
	if(q->capacity==q->size){
		return true;
	}
	else 
	return false;
}
void enqueue(Queue *q, int item){
	if (isfull(q)==false)
	{
	q->rear=(q->rear+1)%q->capacity;
	q->array[q->rear]=item;
	q->size=q->size+1;
	cout<<item<<endl;
}
else
cout<<"QUEUE IS FULL"<<endl;
}
bool isempty(Queue *q){
	if(q->size==0)
	{
		return true;
	}
	else
	return false;
}
int dequeue(Queue *q){
	if(isempty(q)==false)
	
	{
	int item=q->array[q->front];
	q->front=(q->front+1)%q->capacity;
	q->size=q->size-1;
	return item;
}
else 
cout<<"Queue is Empty"<<endl;
}

int main(){
	Queue *q;
	q=createQueue(500);
	enqueue(q, 10); 
    enqueue(q, 20); 
    enqueue(q, 30); 
    enqueue(q, 40); 
    cout<<"Dequeue=>"<<dequeue(q)<<endl;
    cout<<"Dequeue=>"<<dequeue(q)<<endl;
    
}
