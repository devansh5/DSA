Node* getsuccessor(Node* root,int x)
{
    Node* temp=find(root,x);
    if(temp==NULL)
    {
        return NULL;
    }
    if(temp->right!=NULL)
    {
        return getmin(root);
    }
    else{
        Node* ancestor=root;
        Node* successor=NULL;
        while(ancestor!=temp)
        {
            if(temp->data<ancestor->data)
            {
                successor=ancestor;
                ancestor=ancestor->left;
                
            }
            else{
                ancestor=ancestor->right;
                
            }
        }
        return successor;
        
        
    }
}