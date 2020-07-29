#include <iostream>

using namespace std;
struct Node* reverseList(struct Node *head)
{
	// code here
	// return head of reversed list
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


int main()
{







}