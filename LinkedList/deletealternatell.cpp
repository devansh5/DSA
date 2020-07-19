// Given a Singly Linked List of size N, your task is to complete the function deleteAlt(),'
// which starting from the second node delete all alternate nodes of the list.

// Input:
// The function takes a single argument as input, the reference pointer to the head of the linked list. There will be T test cases and for each test case the function will be called separately.

// Output:
// For each test the output will be space separated values of the linked list.

// Constraints:
// 1<=T<=100
// 1<=N<=100

// Example:
// Input:
// 2
// 6
// 1 2 3 4 5 6
// 4
// 99 59 42 20

// Output:
// 1 3 5
// 99 42

// Explanation:
// Testcase 1: Deleting alternate nodes results in the linked list with elements 1->3->5.



void deleteAlt(struct Node *head) {
	// Code here
	Node* temp = head;
	Node* current = head;
	while (current != NULL && current->next != NULL)
	{
		temp = temp->next;
		current->next = temp->next;
		free(temp);
		current = current->next;
		temp = current;
	}
}
