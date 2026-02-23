/*
GFG: Inorder Traversal

Approach:
- Recursively visit left subtree
- Visit root
- Visit right subtree

Time: O(N)
Space: O(H)
*/

void inorder(Node* root, vector<int>& ans) {
    if (!root) return;
    inorder(root->left, ans);
    ans.push_back(root->data);
    inorder(root->right, ans);
}
