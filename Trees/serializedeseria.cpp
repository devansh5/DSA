#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    struct Node* right;
    struct Node* left;
};

vector<int> A;

void serialize(Node *root,vector<int> &A)
{
    //Your code here
    if(root==NULL)
    {
        A.push_back(-1);
        return;
    }
    A.push_back(root->data);
    serialize(root->left,A);
    
    serialize(root->right,A);
    
    
    
}


Node* deserialize(vector<int>&A ,int &i)
{
    if(A[i]==-1 || A.size()==i)
    {
        i++;
        return NULL;
    }
    Node* temp=new Node(A[i]);
    ++i;
    temp->left=deserialize(A,i);
    temp->right=deserialize(A,i);
    
    return temp;
    
}

Node * deSerialize(vector<int> &A)
{
   //Your code
   int i=0;
   Node* root=deserialize(A,i);
   return root;
}
void inorder(Node *root) {
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}