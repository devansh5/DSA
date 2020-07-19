// This function should rotate list counter-clockwise
// by k and return new head (if changed)
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


Node* rotate(Node* head, int k)
{
    // Your code here
    Node* temp=head;
    Node* curr=head;
    int length=1;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        length++;
    }
    if (head==NULL || length==1)
    {
        return head;
    }
    temp->next=head;
    
    while(k--)
    {
        curr=head;
        head=head->next;
    }
    curr->next=NULL;
    
    return head;
}