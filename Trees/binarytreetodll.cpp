#include <bits/stdc++.h>
using namespace std;


struct Node{
    int data;
    Node* right;
    Node* left;
};
void convertdll(Node *root,Node** head,Node** prev )
{
    if(root==NULL)
    {
        return;
    }
    convertdll(root->left,head,prev);
    if(prev=NULL)
    {
        *head=root;
    }
    else{
        root->left=*prev;
        (*prev)->right=root;
    }
    *prev=root;
    convertdll(root->right,head,prev);

}

Node* binarytodll(Node* root)
{
    Node* head=NULL;
    Node* prev=NULL;

    convertdll(root,&head,&prev);

    return head;
}