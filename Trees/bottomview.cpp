
#include <bits/stdc++.h>
using namespace std;


struct Node{
    int data;
    Node* right;
    Node* left;
};



vector <int> bottomView(Node *root)
{
   // Your Code Here
   
   vector<int>v;
   if(root==NULL)
   {
       return v;
   }
   map<int ,vector<int>>m;
   int h=0;
   queue<pair<Node*,int>>que;
   que.push(make_pair(root,h));
   while(!que.empty())
   {
       pair<Node*,int>temp=que.front();
       que.pop();
       h=temp.second;
       Node* node=temp.first;
       m[h].push_back(node->data);
       
       if(node->left!=NULL)
       {
           que.push(make_pair(node->left,h-1));
       }
       if(node->right!=NULL)
       {
           que.push(make_pair(node->right,h+1));
       }
   }
   for(auto const &i:m)
   {
       v.push_back(i.second[i.second.size()-1]);
   }
}