// Lowest Common Ancestor in a Binary Tree 
// Given a Binary Tree with all unique values and two nodes value n1 and n2. The task is to find the lowest common ancestor of the given two nodes. We may assume that either both n1 and n2 are present in the tree or none of them is present. 

// Example 1:

// Input:
// n1 = 2 , n2 =  3

//      1
//    /  \
//   2    3
// Output: 1

// Example 2:

// Input:
// n1 = 3 , n2 = 4

//          5
//         /
//        2
//      /  \
//     3    4
// Output: 2


#include<bits/stdc++.h>
using namespace std;


struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};


struct Node* lca(struct Node *root,int n1,int n2){
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==n1 || root->data==n2)
    {
        return root;
    }
    Node* left=lca(root->left,n1,n2);
    Node* right=lca(root->right,n1,n2);

    if(left!=NULL && right!=NULL)
    {
        return root;
    }
    else{
        return (left?left:right);
    }


}