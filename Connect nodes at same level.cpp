void connectUtil(Node *a, Node* b){
    if(a->right && b->left){
        a->right->nextRight=b->left;
        connectUtil(a->right,b->left);
    }
    else if(b->left && a->left){
        a->left->nextRight=b->left;
        connectUtil(a->left,b->left);
    }
    else if(b->right && a->right){
        a->right->nextRight=b->right;
        connectUtil(a->right,b->right);
    }
    else if(b->right && a->left){
        a->left->nextRight=b->right;
        connectUtil(a->left,b->right);
    }
}

void connect(Node *p)
{
    if(p==NULL)
        return;
    p->nextRight=NULL;
    connect(p->left);
    connect(p->right);
    if(p->left!=NULL){
        if(p->right==NULL)
            (p->left)->nextRight=NULL;
        else
            (p->left)->nextRight=p->right;
    }
    if(p->right!=NULL)
        (p->right)->nextRight=NULL;
    if(p->left && p->right)
        connectUtil(p->left,p->right);
}
