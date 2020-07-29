bool isPalindrome(ListNode* head) {
    ListNode* temp = head;
    bool flag = false;
    int len = 0;
    if (head == NULL || head->next == NULL)
    {
        return 1;
    }
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    int mid = len / 2;

    temp = head;
    if (len == 2 && len % 2 == 0)
    {
        if (temp->val == temp->next->val)
        {
            return 1;
        }
        else {
            return 0;
        }
    }

    for (int i = 1; i < mid; i++)
    {
        temp = temp->next;
    }



    ListNode* temp1 = temp->next;
    temp->next = NULL;
    ListNode* start = head;


    ListNode* prev = NULL;
    ListNode* curr = temp1;
    ListNode* next = temp1;
    while (next != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    temp1 = prev;


    while (temp1 != NULL && start != NULL)
    {
        if (temp1->val == start->val)
        {
            temp1 = temp1->next;
            start = start->next;
        }
        else {
            return 0;
        }
    }
    return 1;
}