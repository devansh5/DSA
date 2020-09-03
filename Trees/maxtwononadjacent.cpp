#include <bits/stdc++.h>
using namespace std;


struct Node{
    int data ;
    Node* left;
    Node* right;
};


pair<int,int>maxsum(Node* root)
{
    if(root==NULL)
    {
        pair<int,int>sum(0,0);
        return sum;
    }
    pair<int,int>sum1=maxsum(root->left);
    pair<int,int>sum2=maxsum(root->right);
    pair<int,int>sum;
    sum.first=sum1.second+sum2.second+root->data;
    
    sum.second=max(sum1.first,sum1.second)+max(sum2.first,sum2.second);
    
    return sum;
}


int getMaxSum(Node *root) 
{
    // Add your code here
    pair<int,int>ma=maxsum(root);
    int res=max(ma.first,ma.second);
    return res;
    
}