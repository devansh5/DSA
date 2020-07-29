// Add 1 to a number represented as linked list
// A number N is represented in Linked List
// such that each digit corresponds to a node in linked list.
// You need to add 1 to it.


// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(1).

// Constraints:
// 1 <= T <= 100
// 1 <= N <= 101000

// Example:
// Input:
// 4
// 456
// 123
// 999
// 1879
// Output:
// 457
// 124
// 1000
// 1880
// Explanation:
// 456 + 1 = 457
// 123 + 1 = 124
// 999 + 1 = 1000
// 1879 + 1 = 1880


Node* reverse(Node* head)
{
    Node* prev = NULL;
    Node* curr = head;
    Node* next = head;
    while (next != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    return head;
}

Node* addOne(Node *head)
{

    head = reverse(head);
    // Your Code here
    // return head of list after adding one
    if (head == NULL)
    {
        return head;
    }
    Node* temp = head;
    int sum = 0;
    int carry = 1;
    while (carry != 0 && temp != NULL)
    {
        sum = temp->data + carry;
        if (sum == 10 && temp->next != NULL)
        {
            temp->data = 0;
            temp = temp->next;
            carry = 1;
        }
        else if (sum == 10 && temp->next == NULL)
        {
            temp->data = 10;
            carry = 0;
        }
        else if (sum != 10) {
            temp->data = sum;
            carry = 0;
        }



    }
    head = reverse(head);
    return head;
}