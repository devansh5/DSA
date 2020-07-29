// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(1).

// Constraints:
// 1 <= T <= 100
// 1 <= N <= 103

// Example:
// Input:
// 2
// 8
// 1 2 2 1 2 0 2 2
// 4
// 2 2 0 1
// Output:
// 0 1 1 2 2 2 2 2
// 0 1 2 2


// This function is to segregate the elememtns in the linked list
// This will do the required arrangement by changing the links
Node* segregate(Node *head) {

    Node *zerod = new Node(0);
    Node *oned = new Node(0);
    Node *twod = new Node(0);

    Node *zero = zerod, *one = oned , *two = twod;

    Node* curr = head;

    // Add code here
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    while (curr != NULL)
    {
        if (curr->data == 0)
        {
            zero->next = curr;
            zero = zero->next;
            curr = curr->next;

        }
        else if (curr->data == 1)
        {
            one->next = curr;
            one = one->next;
            curr = curr->next;

        }
        else {
            two->next = curr;
            two = two->next;
            curr = curr->next;

        }
    }
    zero->next = oned->next
                 ? oned->next : twod->next;
    one->next = twod->next;
    two->next = NULL;

    head = zerod->next;

    delete zerod;
    delete oned;
    delete twod;


    return head;

}
