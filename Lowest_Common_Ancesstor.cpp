bool find_path(Node *root,int n,vector<int>&p){
    if(root==NULL){
        return false;
    }
    if(root->data==n){
        p.push_back(root->data);
        return true;
    }
    bool op1 = find_path(root->left,n,p);
    bool op2 = find_path(root->right,n,p);
    if(op1 or op2){
        p.push_back(root->data);
        return true;
    }
    return false;
}

Node* lca(Node* root ,int n1 ,int n2 )
{
    vector<int>p1;
    vector<int>p2;
    bool op1 = find_path(root,n1,p1);
    bool op2 = find_path(root,n2,p2);
    if(!op1 or !op2){
        return NULL;
    }
    int i=p1.size()-1;
    int j=p2.size()-1;
    while(i>=0 and j>=0 and p1[i]==p2[j]){
        i--;
        j--;
    }
    Node *ans = new Node();
    ans->data = p1[i+1];
    return ans;
}