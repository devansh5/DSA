#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    struct Node* right;
    struct Node* left;
};


void leftview(Node* root,int level,int &maxlevel)
{

    if(root!=NULL)
    {
        if(maxlevel<level)
        {
            cout<<root->data<<" ";
            maxlevel=level;
        }

        leftview(root->right,level+1,maxlevel);
        leftview(root->left,level+1,maxlevel);
    }

}

void leftView(Node* root)
{
    int level=1;
    int maxlevel=0;
    leftview(root,level,maxlevel);
}