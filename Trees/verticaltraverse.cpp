
#include <bits/stdc++.h>
using namespace std;


struct Node{
    int data;
    Node* right;
    Node* left;
};

vector<int> verticalOrder(Node *root)
{
    //Your code here
    
    vector<int>v;
    if(root==NULL)
    {
        return v;
    }
    map<int,vector<int>>m;
    int hd=0;
    queue<pair<Node*, int> > que; 
    que.push(make_pair(root, hd)); 
  
     while (!que.empty()) 
     { 
        pair<Node *,int> temp = que.front(); 
        que.pop(); 
        hd = temp.second; 
        Node* node = temp.first; 
  
        m[hd].push_back(node->data); 
  
        if (node->left != NULL) 
            que.push(make_pair(node->left, hd-1)); 
        if (node->right != NULL) 
            que.push(make_pair(node->right, hd+1)); 
    }
    for(auto const &i : m)
    {
        for(auto const &j : i.second)
        {
            v.push_back(j);
        }
    }
    return v;
}