// Ancestors in Binary Tree 
// Given a Binary Tree and a target key, you need to find all the ancestors of the given target key.

//               1
//             /   \
//           2      3
//         /  \
//       4     5
//      /
//     7
// Key: 7
// Ancestor: 4 2 1
// Example 1:

// Input:
//         1
//       /   \
//      2     3
// target = 2
// Output: 1

// Example 2:

// Input:
//          1
//        /   \
//       2     3
//     /  \   /  \
//    4    5 6    8
//   /
//  7
// target = 7
// Output: 4 2 1
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node*  right;
    struct Node* left;
};



int traverse(struct Node *root,int target,vector<int>&v)
{
    if(root!=NULL)
    {
        if(root->data==target)
        {
            return 1;
        }
        if(traverse(root->left,target,v)||traverse(root->right,target,v))
        {
            v.push_back(root->data);
            return 1;
        }
    }
    else {
        return 0;
    }
    
}



vector<int> Ancestors(struct Node *root, int target)
{
     // Code here
     vector<int>v;
     int s=traverse(root,target,v);
     return v;
     
}