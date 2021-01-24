vector<int> leftView(Node *root)
{
   vector<int>v;
   if(root==NULL){
       return v;
   }
   map<int,int>m;
   queue<pair<Node*,int>>q;
   q.push({root,0});
   while(!q.empty()){
       auto t = q.front();
       q.pop();
       Node *node = t.first;
       int l = t.second;
       if(m[l]==0){
           v.push_back(node->data);
           m[l]=1;
       }
       if(node->left){
           q.push({node->left,l+1});
       }
       if(node->right){
           q.push({node->right,l+1});
       }
   }
   return v;
}