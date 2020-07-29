


// given a linked list reverse the linked list in group size k

// ex-1 2 3 4 5 6 7 8
// k=3
// 3 2 1 6 5 4 8 7

struct node *reverse (struct node *head, int k)
{
    // Complete this method
    node* prev = NULL;
    node* next = head;
    node* curr = head;
    int count = 0;
    while (count < k && curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if (next != NULL)
    {
        head->next = reverse(next, k);
    }
    return prev;


}