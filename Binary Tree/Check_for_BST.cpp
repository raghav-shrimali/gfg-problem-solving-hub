/*
Problem: Check for BST
Platform: GeeksforGeeks

Approach:
Use recursion with a valid range (min, max).
Each node must satisfy:
min < node->data < max

For left subtree:
max becomes root->data

For right subtree:
min becomes root->data

If any node violates the rule, return false.

Time Complexity: O(N)
Space Complexity: O(H)
*/

class Solution {
  public:
  
    bool check(Node* root, long minVal, long maxVal)
    {
        if(!root)
            return true;
            
        if(root->data <= minVal || root->data >= maxVal)
            return false;
            
        return check(root->left, minVal, root->data) &&
               check(root->right, root->data, maxVal);
    }
  
    bool isBST(Node* root) {
        return check(root, LONG_MIN, LONG_MAX);
    }
};
