/*
Approach:
- Use queue (BFS)

Time: O(N)
Space: O(N)
*/

vector<int> levelOrder(Node* root) {
    vector<int> ans;
    if (!root) return ans;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* temp = q.front(); q.pop();
        ans.push_back(temp->data);

        if (temp->left) q.push(temp->left);
        if (temp->right) q.push(temp->right);
    }

    return ans;
}
