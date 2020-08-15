int isBSTUtil(Node* node, int min, int max)  
{  
    if (node==NULL)  
        return 1;  
    if (node->data < min || node->data > max)  
        return 0;  
    return
        isBSTUtil(node->left, min, node->data-1) && isBSTUtil(node->right, node->data+1, max); 
}  

bool isBST(Node* root)
{  
    int h= isBSTUtil(root, INT_MIN, INT_MAX);
    if(h==1)
        return true;
    return false;
} 
