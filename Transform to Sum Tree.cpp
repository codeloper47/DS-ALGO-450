int helper(Node *root){
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL and root->right==NULL){
        int t = root->data;
        root->data=0;
        return t;
    }
    int ls = helper(root->left);
    int rs = helper(root->right);
    int tmp = root->data;
    root->data = ls+rs;
    return tmp+ls+rs;
}

void toSumTree(Node *node)
{
    helper(node);
}