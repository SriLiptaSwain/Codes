
void util(Node* root,Node* &head){
    if(root){
        util(root->right,head);
        Node* temp = new Node;
        temp->data=(root->data);
        temp->right=head;
        temp->left=NULL;
        if(head)
            head->left=temp;
        head=temp;
        util(root->left,head);
    }
}

Node *bTreeToCList(Node *root)
{
    Node *head = NULL;
    util(root,head);
    Node * t =head;
    while(t->right)
        t=t->right;
    head->left=t;
    t->right=head;
    return head;
}
