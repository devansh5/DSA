#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
}

Node* head;


void insert(x)
{
    Node* temp=new Node();
    temp->data=x;
    temp->next=head;
    head=temp;
}

void print()
{
    Node* temp=head;
    cout<<"List is: ";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    
}



int main()
{

    head=NULL;
    int n,x;

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the Number:"<<endl;
        cin>>x;
        insert(x);
        print();
    }

    return 0;   
}