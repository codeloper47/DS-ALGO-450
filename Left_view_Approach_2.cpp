vector<int> leftView(Node *root)
{
    vector<int> v;
    if (root == NULL)
    {
        return v;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int s = q.size();
        for (int i = 0; i < s; i++)
        {
            Node *t = q.front();
            q.pop();
            if (i == 0)
            {
                v.push_back(t->data);
            }
            if (t->left)
            {
                q.push(t->left);
            }
            if (t->right)
            {
                q.push(t->right);
            }
        }
    }
    return v;
}