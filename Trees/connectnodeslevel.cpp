 struct Node
{
  int data;
  Node *left,  *right;
  Node *nextRight;  // This has garbage value in input trees
};
#include<bits/stdc++.h>
using namespace std;






void connect(Node *p)
{
   // Your Code Here
   queue<Node*>q;
   q.push(p);
   Node* temp=NULL;
  
   while(!q.empty())
   {
       
       int size=q.size();
       for(int i=0;i<size;i++)
       {
           
           Node* prev=temp;
           temp=q.front();
           q.pop();
           if(i>0)
           {
               prev->nextRight=temp;
           }
          
           if(temp->left!=NULL)
           {
               q.push(temp->left);
           }
           if(temp->right!=NULL)
           {
               q.push(temp->right);
           }
       }
       temp->nextRight=NULL;
       
       
   }
}