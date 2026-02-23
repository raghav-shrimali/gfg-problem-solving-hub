void preorder(Node* root, vector<int>& ans) {
    if (!root) return;
    ans.push_back(root->data);
    preorder(root->left, ans);
    preorder(root->right, ans);
}
