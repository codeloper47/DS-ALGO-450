class Tree{
    
    public int helper(Node root){
    if(root==null){
        return 0;
    }
    if(root.left==null && root.right==null){
        int t = root.data;
        root.data=0;
        return t;
    }
    int ls = helper(root.left);
    int rs = helper(root.right);
    int tmp = root.data;
    root.data = ls+rs;
    return tmp + root.data;
    }
    
    public void toSumTree(Node root){
         helper(root);
    }
}