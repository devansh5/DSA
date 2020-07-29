// You are given a pointer/ reference to the node which is to be deleted
// from the linked list of N nodes. The task is to delete the node.
// Pointer/ reference to head node is not given.
// Note: No head reference is given to you.

// This function should delete node from linked list. The function
// may assume that node exists in linked list and is not last node
// node: reference to the node which is to be deleted
// Example:
// Input:
// 2
// 2
// 1 2
// 1
// 4
// 10 20 4 30
// 20
// Output:
// 2
// 10 4 30
void deleteNode(Node *node)
{
	// Your code here

	Node* temp = node->next;

	node->data = temp->data;

	node->next = temp->next;

	free(temp);




}