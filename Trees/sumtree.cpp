// Input:
//     3
//   /   \    
//  1     2

// Output: 1
// Explanation: The given tree is a sum 
// tree so return a boolean true.
// check the tree is sumtreee or not

// int sumtree(Node* root)
// {
//     if(root==NULL)
//     {
//         return 0;
//     }
//     if(root->left==NULL && root->right==NULL)
//     {
//         return root->data;
//     }
//     int lsum=sumtree(root->left);
//     int rsum=sumtree(root->right);
//     if(lsum==-1 || rsum==-1)
//     {
//         return -1;
//     }
//     if(root->data==(lsum+rsum))
//     {
//         return (2*(root->data));
//     }
    
//     return -1;
// }


// bool isSumTree(Node* root)
// {
//      // Your code here
//      int s=sumtree(root);
//      if(s!=-1)
//      {
//          return true;
//      }
//      else{
//          return false;
//      }
// }