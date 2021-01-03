vector<int> reverseLevelOrder(Node *root)
{
    vector<int> v;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *t = q.front();
        q.pop();
        v.push_back(t->data);
        if (t->right)
        {
            q.push(t->right);
        }
        if (t->left)
        {
            q.push(t->left);
        }
    }
    reverse(v.begin(), v.end());
    return v;
}