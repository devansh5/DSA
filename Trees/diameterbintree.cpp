// time complexity O(n^2)

// iefficient solution because in postorder the height we are caling again and again


#include<iostream>

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
int diameter(Node* root)
{
    if(root==NULL)
    {
        return 0 ;
    }
    int ld=diameter(root->left);
    int rd=diameter(root->right);

    int f=height(root->left)+height(root->right)+1;

    int dia=max(max(ld,rd),f);


    return dia;
}