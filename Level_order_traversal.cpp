vector<int> levelOrder(Node *node)
{
    vector<int> v;
    queue<Node *> q;
    q.push(node);
    while (!q.empty())
    {
        Node *t = q.front();
        q.pop();
        v.push_back(t->data);
        if (t->left)
        {
            q.push(t->left);
        }
        if (t->right)
        {
            q.push(t->right);
        }
    }
    return v;
}