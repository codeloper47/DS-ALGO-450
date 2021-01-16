bool isIsomorphic(Node *root1,Node *root2)
{
    if(root1==NULL and root2==NULL){
        return true;
    }
    if(root1==NULL or root2==NULL){
        return false;
    }
    if(root1->data != root2->data){
        return false;
    }
    return (isIsomorphic(root1->left,root2->left)and isIsomorphic(root1->right,root2->right)) || 
    (isIsomorphic(root1->left,root2->right) and isIsomorphic(root1->right,root2->left));
}