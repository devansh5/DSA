

// For two trees ‘a’ and ‘b’ to be mirror images, the following three conditions must be true:

// Their root node’s key must be same
// Left subtree of root of ‘a’ and right subtree root of ‘b’ are mirror.
// Right subtree of ‘a’ and left subtree of ‘b’ are mirror.


// Input:
// T1:     1     T2:     1
//       /   \         /   \

#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* right;
    struct Node* left;
};


int areMirror(Node* a , Node* b)
{

    if(a==NULL && b==NULL)
    {
        return 1;
    }
    if(a==NULL || b==NULL)
    {
        return 0;
    }
    if(a->data==b->data)
    {
        return areMirror(a->right,b->left) && areMirror(a->left,a->right);
    }
    return 0;
    
}