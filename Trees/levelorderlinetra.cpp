// You have given a binary tree and print the level order traversal with there level followed by $

            1
    2               3
4       5       6       7

    8

// then to print is 1 $ 2 3 $ 4 5 6 7 $ 8 $ 


void levelorder(Node* node)
{

    queue<Node*>q;
    q.push(node);
    while(1)
    {

        int size=q.size();

        while(size>0)
        {
            Node* temp=q.front();
            q.pop();

            cout<<temp->data<<" ";


            if(temp->left!=NULL)
            {
                q.push(temp->left);
            }

            if(temp->right!=NULL)
            {
                q.push(temp->right);
            }

            size--;

        }

        cout<<"$"<<" ";

    }





}