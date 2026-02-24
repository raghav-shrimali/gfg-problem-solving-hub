/*
GFG - Inorder Traversal (Iterative)
Order: Left -> Root -> Right
Approach: Use Stack

Time Complexity: O(N)
Space Complexity: O(N)
*/

class Solution {
public:
    vector<int> inOrder(Node* root) {
        vector<int> ans;
        stack<Node*> st;
        Node* curr = root;

        while(curr || !st.empty()) {

            while(curr) {
                st.push(curr);
                curr = curr->left;
            }

            curr = st.top();
            st.pop();

            ans.push_back(curr->data);

            curr = curr->right;
        }

        return ans;
    }
};
