int height(Node *root){
    if(root==NULL){
        return 0;
    }
    int ls = height(root->left);
    int rs = height(root->right);
    return max(ls,rs)+1;
}
int diameter(Node* root) {
    if(root==NULL){
        return 0;
    }
    int op1 = height(root->left)+height(root->right)+1;
    int op2 = diameter(root->left);
    int op3 = diameter(root->right);
    return max(op1,max(op2,op3));
}