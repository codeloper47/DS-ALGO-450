
void helper(Node *root,int sum,int len,int &ms,int &ml){
    if(root==NULL){
        return;
    }
    if(root->left==NULL and root->right==NULL and len>=ml and sum+root->data>=ms){
        ms = root->data+sum;
        ml = len;
        return;
    }
    helper(root->left,sum+root->data,len+1,ms,ml);
    helper(root->right,sum+root->data,len+1,ms,ml);
}

int sumOfLongRootToLeafPath(Node* root)
{
    int ms=0,ml=0;
    helper(root,0,0,ms,ml);
    return ms;
}