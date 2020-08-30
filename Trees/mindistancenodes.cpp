// Given a binary tree and two node values your task is to find the minimum distance between them.

// Example 1:

// Input:
//         1
//       /  \
//      2    3
// a = 2, b = 3
// Output: 2
// Explanation: The tree formed is:
//        1
//      /   \ 
//     2     3
// We need the distance between 2 and 3.
// Being at node 2, we need to take two
// steps ahead in order to reach node 3.
// The path followed will be:
// 2 -> 1 -> 3. Hence, the result is 2. 


#include <bits/stdc++.h>
using namespace std;


struct Node{
    int data;
    Node* right;
    Node* left;
};


int distance(Node* root,int x)
{
    if(root==NULL)
    {
        return -1;
    }
    if(root->data == x){
        return 0;
    }
    int distl = -1;
    int distr = -1;
    distl = distance(root->left, x);
    distr = distance(root->right, x);
    if(distl>=0)
        return distl + 1;
    if(distr>=0)
        return distr + 1;
    return -1;
}
    
Node* lca(Node* root,int a,int b)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==a || root->data==b)
    {
        return root;
    }
    Node* left=lca(root->left,a,b);
    Node* right=lca(root->right,a,b);
    if(left!=NULL && right!=NULL)
    {
        return root;
    }
    return(left?left:right);
}
   

   
int findDist(Node* root, int a, int b) {
    // Your code here
    int min;
    int adist=distance(root,a);
    int bdist=distance(root,b);
    Node* temp=lca(root,a,b);
    int x=temp->data;
    int lcadist=distance(root,x);
    
    min=adist+bdist-(2*lcadist);
    
    return min;
}
