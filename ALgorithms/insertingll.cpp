http://cslibrary.stanford.edu/102/PointersAndMemory.pdf
// // inserting a linked list  at the end

// #include <bits/stdc++.h>

// using namespace std;
// // function appends the data at the end of the list
// Node *insertAtEnd(Node *head, int newData)  {
// 	// Your code here
// 	Node* tail = head;
// 	Node* temp = new Node(newData);
// 	temp->data = newData;
// 	temp->next = NULL;
// 	if (head == NULL)
// 	{
// 		head = temp;
// 		tail = temp;
// 		return head;
// 	}

// 	while (tail->next != NULL)
// 	{
// 		tail = tail->next;
// 	}
// 	tail->next = temp;



// 	return head;

// }
// // Deleting a Node at the xth position in the linked list

// Node* deleteNode(Node *head, int x)
// {
// 	//Your code here
// 	Node* temp = head;
// 	Node* prev = temp;
// 	for (int i = 0; i < x - 1; i++)
// 	{
// 		prev = temp;
// 		temp = temp->next;


// 	}
// 	prev->next = temp->next;
// 	if (temp == head) {
// 		head = temp->next;
// 	}
// 	free(temp);
// 	return head;

// }
// // Insert in Middle of Linked List

// Node* insertInMiddle(Node* head, int x)
// {
// 	// Cpde here
// 	int len = 0;
// 	Node* newx = new Node(x);
// 	newx->data = x;
// 	newx->next;
// 	Node* temp = head;
// 	while (temp != NULL)
// 	{
// 		temp = temp->next;
// 		len++;
// 	}
// 	temp = head;
// 	int count = ((len % 2 == 0) ? (len / 2) : (len + 1) / 2);
// 	while (count-- > 1)
// 	{
// 		temp = temp->next;
// 	}
// 	newx->next = temp->next;
// 	temp->next = newx;

// 	return head;
// }
// // Deletes middle of linked list and returns head of the modified list
// Node* deleteMid(Node* head)
// {
// 	// Your Code Here
// 	Node* temp = head;
// 	Node* prev = head;
// 	int len = 0;
// 	while (temp != NULL) {
// 		temp = temp->next;
// 		len++;
// 	}
// 	int count = len / 2;
// 	if (head == NULL || len == 1)
// 	{
// 		return head;
// 	}
// 	temp = head;
// 	for (int i = 0; i < count; i++)
// 	{
// 		prev = temp;
// 		temp = temp->next;
// 	}
// 	prev->next = temp->next;
// 	free(temp);
// 	return head;

// }
// // inserted in sorted list
// // Input:
// // 2
// // 6
// // 25 36 47 58 69 80
// // 19
// // 2
// // 50 100
// // 75

// // Output:
// // 19 25 36 47 58 69 80
// // 50 75 100
// Node *sortedInsert(struct Node* head, int data) {
// 	// Code here
// 	Node* newN = new Node(data);
// 	Node* temp = head;
// 	Node* prev = head;
// 	if (newN->data < temp->data)
// 	{
// 		newN->next = head;
// 		head = newN;
// 		return head;
// 	}
// 	while (newN->data > temp->data)
// 	{
// 		prev = temp;
// 		temp = temp->next;
// 	}
// 	prev->next = newN;
// 	newN->next = temp;
// 	return head;
// }




#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node* next;

	Node(int x)
	{
		data = x;
		next = NULL;
	}

};
Node* sortedInsert(struct Node* head, int data);


void printList(Node* node)
{
	while (node != NULL)
	{
		cout << node->data << " ";
		node = node->next;
	}
	cout << "\n";
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{

		int n;
		cin >> n;

		int data;
		cin >> data;

		struct Node *head = new Node(data);
		struct Node *tail = head;
		for (int i = 0; i < n - 1; ++i)
		{
			cin >> data;
			tail->next = new Node(data);
			tail = tail->next;
		}

		int k;
		cin >> k;

		head = sortedInsert(head, k);
		printList(head);


	}

	return 0;
}



Node *sortedInsert(struct Node* head, int data) {
	// Code here
	Node* newN = new Node(data);
	Node* temp = head;
	if (head == NULL)
	{
		head = newN;
		newN->next = NULL;
		return head;
	}
	else if (data < head->data)
	{
		newN->next = head;
		head = newN;
		return head;
	}
	while (temp->next != NULL && data >= temp->next->data )
	{
		temp = temp->next;
	}
	newN->next = temp->next;
	temp->next = newN;

	return head;

}
