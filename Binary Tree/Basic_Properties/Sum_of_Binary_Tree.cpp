int sumBT(Node* root) {
    if (!root) return 0;
    return root->data + sumBT(root->left) + sumBT(root->right);
}
