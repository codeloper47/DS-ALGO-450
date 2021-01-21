vector<int> bottomView(Node *root)
{
    vector<int> v;
    map<int, int> m;
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    while (!q.empty())
    {
        auto t = q.front();
        q.pop();
        int d = t.second;
        Node *node = t.first;
        m[d] = node->data;
        if (node->left)
        {
            q.push({node->left, d - 1});
        }
        if (node->right)
        {
            q.push({node->right, d + 1});
        }
    }
    for (auto x : m)
    {
        v.push_back(x.second);
    }
    return v;
}
