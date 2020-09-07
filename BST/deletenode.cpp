Node *deleteNode(Node *root,  int x)
{
    // your code goes here
    if(root==NULL )
    {
        return root;
    }
    if(root->data>x)
    {
        root->left=deleteNode(root->left,x);
    }
    else if(root->data<x)
    {
        root->right=deleteNode(root->right,x);   
    }
    else{
        if(root->left==NULL)
        {
            Node* temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL)
        {
            Node* temp=root->left;
            free(root);
            return temp;
        }
        Node* temp=getmin(root->right);
        root->data=temp->data;
        root->right=deleteNode(root->right,temp->data);
    }
    return root;
    
}