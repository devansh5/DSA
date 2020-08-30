// Example 1:

// Input:
//       1
//     /
//    2
//     \
//      3 
// Output: 0
// Explanation: The max difference in height
// of left subtree and right subtree is 2,
// which is greater than 1. Hence unbalanced
// Example 2:

// Input:
//        10
//      /   \
//     20   30 
//   /   \
//  40   60
// Output: 1
// Explanation: The max difference in height
// of left subtree and right subtree is 1.
// Hence balanced.
//  A binary tree node structure
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

// TIME COMPLEXITY _ O(n^2)

int height(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int lmax=height(root->left);
    int rmax=height(root->right);
    if(lmax>rmax)
    {
        return (lmax+1);
    }
    else
    {
        return (rmax+1);
    }
}


bool isBalanced(Node *root)
{
    //  Your Code here
    if(root==NULL)
    {
        return true;
    }
    
    
    int lh=height(root->left);
    int rh=height(root->right);
    int difference=abs(lh-rh);
    
    if(difference<=1 && isBalanced(root->left) && isBalanced(root->right))
    {
        return true;
    }
    return false;
}