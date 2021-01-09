bool check(Node *root)
{
    map<int, int> m;
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    while (!q.empty())
    {
        auto p = q.front();
        q.pop();
        Node *t = p.first;
        int l = p.second;
        if (t->left == NULL and t->right == NULL)
        {
            m[l] = t->data;
        }
        if (t->left)
        {
            q.push({t->left, l + 1});
        }
        if (t->right)
        {
            q.push({t->right, l + 1});
        }
    }

    if (m.size() == 1)
    {
        return true;
    }
    return false;
}