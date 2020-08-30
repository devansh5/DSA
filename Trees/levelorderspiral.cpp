// Input:
//            10
//          /     \
//         20     30
//       /    \
//     40     60
// Output: 10 20 30 60 40 



#include <bits/stdc++.h>

using namespace std;
struct Node{
    Node* left;
    Node* right;
    int data;

}


int height(Node *root)
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
    else{
        return (rmax+1);
    }
}

void printSpiral(Node *root)
{
    int level=0;
    int h=height(root);
    stack<Node*>s1;
    stack<Node*>s2;
    s1.push(root);
    while(level!=h)
    {
        while(!s1.empty())
        {
            Node* temp=s1.top();
            cout<<temp->data<<" ";
            s1.pop();
            if(temp->right!=NULL)
            {
            
                s2.push(temp->right);
            }
            if(temp->left!=NULL)
            {
                s2.push(temp->left);
                
            }
        }
        while(!s2.empty())
        {
            Node* temp1=s2.top();
            cout<<temp1->data<<" ";
            s2.pop();
            if(temp1->left!=NULL)
            {
                s1.push(temp1->left);
            }
            if(temp1->right!=NULL)
            {
                s1.push(temp1->right);
            }
        }
        level++;
    }
}
