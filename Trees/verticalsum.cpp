
#include <bits/stdc++.h>
using namespace std;


struct Node{
    int data;
    Node* right;
    Node* left;
};
// Input:
//        1
//     /   \
//   2      3
//  / \    / \
// 4   5  6   7
// Output: 
// Explanation:
// The tree has 5 vertical lines
// Vertical-Line-1 has only one node
// 4 => vertical sum is 4
// Vertical-Line-2: has only one node
// 2=> vertical sum is 2
// Vertical-Line-3: has three nodes:
// 1,5,6 => vertical sum is 1+5+6 = 12
// Vertical-Line-4: has only one node 3
// => vertical sum is 3
// Vertical-Line-5: has only one node 7
// => vertical sum is 7


void verticalsum(Node* root,int level,map<int,int> &mp)
{
    if(root==NULL)
    {
        return;
    }
    mp[level]+=root->data;
    verticalsum(root->left,level-1,mp);
    verticalsum(root->right,level+1,mp);
    
}

vector <int> verticalSum(Node *root) {
    // add code here.
    vector<int>v;
    int level=0;
    map<int,int>mp;
    verticalsum(root,level,mp);
    for(auto i:mp)
    {
        v.push_back(i.second);
    }
    return v;
    mp.clear();
}









