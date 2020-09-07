int height(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int left=height(root->left);
    int right=height(root->right);
    return (left+right+1);
}
bool bst(Node* root,int min,int max) 
{
    if(root==NULL)
    {
        return true;
    }
    if(root->data<min || root->data>max)
    {
        return false;
    }
    return bst(root->left,min,root->data-1) && bst(root->right,root->data+1,max);
}

// return true if the given tree is a BST, else return false
bool isbst(Node* root) {
    // Your code here
    return bst(root,INT_MIN,INT_MAX);

}

int largestBst(Node *root)
{
	//Your code here
	if(isbst(root))
	{
	    return (height(root));
	}
	int h1=largestBst(root->left);
	int h2=largestBst(root->right);
	
	return max(h1,h2);
	
}