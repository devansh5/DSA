#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// return the Height of the given Binary Tree
int height(Node* root)
{
   // Your code here
   if(root==NULL)
   {
       return 0;
   }
   int ldepth=height(root->left);
   int rdepth=height(root->right);
   
   if(ldepth>rdepth)
   {
       return (ldepth+1);
   }
   else{ return (rdepth+1);}
}
    