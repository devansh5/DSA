



void fixbst(Node* root,Node* &t1,Node* &t2,Node* &prev)
{
    if(root==NULL)
    {
        return;
    }
    fixbst(root->left,t1,t2,prev);
    
    if(prev && prev->data>root->data)
    {
        if(t1==NULL)
        {
            t1=prev;
        }
        t2=root;
    }
    prev=root;
    
    fixbst(root->right,t1,t2,prev);
}


struct Node *correctBST( struct Node* root )
{
    // add code here.
    if(root==NULL)
    {
        return NULL;
    }
    Node* t1=NULL;
    Node* t2=NULL;
    
    Node* prev=NULL;
    
    fixbst(root,t1,t2,prev);
    swap(t1->data,t2->data);
    return root;
}