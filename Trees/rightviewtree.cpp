#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    struct Node* right;
    struct Node* left;
};


void rightview(Node* root,int level,int &maxlevel)
{

    if(root!=NULL)
    {
        if(maxlevel<level)
        {
            cout<<root->data<<" ";
            maxlevel=level;
        }

        rightview(root->right,level+1,maxlevel);
        rightview(root->left,level+1,maxlevel);
    }

}

void rightView(Node* root)
{
    int level=1;
    int maxlevel=0;
    rightview(root,level,maxlevel);
}