#include <bits/stdc++.h>
using namespace std;


struct Node{
    int data ;
    Node* left;
    Node* right;

     Node(int val) {
        data = val;
        left = right = NULL;
    }
};

Node* insert(Node* root, int key)
{
    // Your code here
    if(root==NULL)
    {
        return new Node(key);
    }
    if(root->data<key)
    {
        root->right=insert(root->right,key);
    }
    else if(root->data>key)
    {
        root->left=insert(root->left,key);
    }
    return root;
}