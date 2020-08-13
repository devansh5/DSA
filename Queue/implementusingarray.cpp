#include<iostream>
using namespace std;

#define MAX 10


class queue
{
private:
	int A[MAX];
	int front;
	int rear;
public:
	queue()
	{
		front=-1;
		rear=-1;
	}
	bool isempty()
	{
		if(front==-1 && rear==-1)
		{
			return true;
		}
		else{
			return false;
		}

	}
	bool isfull()
	{
		return (rear+1)%MAX==front?true:false;
	}

	void enqueue(int x)
	{
		if(isempty())
		{
			front=0;
			rear=0;
			A[rear]=x;
		}
		if(isfull())
		{
			cout<<"the queue is already full"<<endl;
			return;
		}
		else{
			rear=(rear+1)%MAX;
			A[rear]=x;
		}
	}
	void dequeue()
	{
		if(isempty())
		{
			cout<<"Queue is empty"<<endl;
			return;
		}
		else if(front==rear)
		{
			rear=front=-1;

		}
		else{
			front=(front+1)%MAX;
		}
	}
	int top()
	{
		if(front==-1)
		{
			cout<<"cannot return from empty queue"<<endl;
			return -1;
		}
		return A[front];
	}
	void print()
	{
		int count=(rear+MAX-front)%MAX+1;
		cout<<"Queue    :";
		for(int i=0;i<count;i++)
		{
			int index=(front+i)%MAX;
			cout<<A[index]<<" ";
		}
		cout<<endl;

	}

	
};



int main()
{
	queue q;
	q.enqueue(4); 
	q.print();
	q.enqueue(2);
	q.print();
	q.dequeue();
	q.print();


	return 0;
}
















