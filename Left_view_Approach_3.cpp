void helper(Node *root, int &ml, vector<int> &v, int cl)
{
    if (root == NULL)
    {
        return;
    }
    if (cl > ml)
    {
        v.push_back(root->data);
        ml = cl;
    }
    helper(root->left, ml, v, cl + 1);
    helper(root->right, ml, v, cl + 1);
}

vector<int> leftView(Node *root)
{
    vector<int> v;
    int ml = 0;
    helper(root, ml, v, 1);
    return v;
}