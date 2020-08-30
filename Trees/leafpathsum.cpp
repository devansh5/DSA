// Input:
// Tree = 
//             1
//           /   \
//         2      3
// S = 4

// Output: 1

// Explanation:
// The sum of path from leaf node 3 to root 1 is 4.

#include <bits/stdc++.h>
using namespace std;


struct Node{
    int data;
    Node* right;
    Node* left;
};




bool hasPathSum(Node *node, int sum) {
    // Your code here
    if(node==NULL)
    {
        return (sum==0);
    }
    sum=sum-node->data;
    if(sum==0 && node->right==NULL && node->left==NULL)
    {
        return true;
    }
    bool m=hasPathSum(node->left,sum);
    bool n=hasPathSum(node->right,sum);
    
    sum=sum+node->data;
    
    return (m||n);   
}