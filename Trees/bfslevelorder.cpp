#include <bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *left;
	Node *right;
};

struct Node *newNode(int x)
{
	Node *temp=new Node;
	temp->data=x;
	temp->left=temp->right=NULL;

	return temp;
}

void levelordertraversal(Node* root)
{
	if(root==NULL)
	{
		return;
	}

	queue<Node*>q;
	q.push(root);


	while(!q.empty())
	{
		Node* node=q.front();
		cout<<node->data<<" ";
		q.pop();
		if(node->left!=NULL)
		{
			q.push(node->left);
		}
		if(node->right!=NULL)
		{
			q.push(node->right);
		}
	}



}

int main()
{

	Node* root = newNode(1);
	root->left=newNode(2);
	root->right=newNode(3);
	root->left->right=newNode(4);
	root->left->left=newNode(5);
	root->right->left=newNode(6);
	root->right->right=newNode(7);

	levelordertraversal(root);

	return 0;
}

