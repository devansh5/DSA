#include <bits/stdc++.h>
using namespace std;


struct Node{
    int data;
    Node* left;
    Node* right;
};

// recursive solution

void preorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }

    cout<<root->data;
    preorder(root->left);
    preorder(root->right);
}

// Non-recursive solution





















// postorder traversal


void postorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }

    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
}

// Non-recursive solution




















// Inorder Traversal


void inorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }

    
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
    
}

// Non _recursive solution