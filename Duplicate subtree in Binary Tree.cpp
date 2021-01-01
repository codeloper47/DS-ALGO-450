string serialize(Node *root){
    if(root==NULL){
        return "";
    }
    string ans="";
    ans+=to_string(root->data)+",";
    ans+=serialize(root->left);
    ans+=serialize(root->right);
    return ans;
}

bool dupSub(Node *root)
{
    map<string,int>m;
    queue<Node *>q;
    q.push(root);
    while(!q.empty()){
        Node *node = q.front();
        q.pop();
        string str;
        if(node->left==NULL and node->right==NULL){
            
        }else{
            str=serialize(node);
            m[str]++;
        }
        if(node->left){
            q.push(node->left);
        }
        if(node->right){
            q.push(node->right);
        }
    }
    for(auto x:m){
        if(x.second>=2){
            return true;
        }
    }

    return false;

}