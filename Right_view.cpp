vector<int> rightView(Node *root)
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
            if (t->right)
            {
                q.push(t->right);
            }
            if (t->left)
            {
                q.push(t->left);
            }
        }
    }
    return v;
}
