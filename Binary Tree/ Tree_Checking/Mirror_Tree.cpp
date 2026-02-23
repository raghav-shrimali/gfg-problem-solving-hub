void mirror(Node* root) {
    if (!root) return;

    swap(root->left, root->right);
    mirror(root->left);
    mirror(root->right);
}
