/*
GFG - Preorder Traversal (Iterative)
Order: Root -> Left -> Right
Approach: Use Stack

Time Complexity: O(N)
Space Complexity: O(N)
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> ans;
        if(!root) return ans;

        stack<Node*> st;
        st.push(root);

        while(!st.empty()) {
            Node* temp = st.top();
            st.pop();

            ans.push_back(temp->data);

            if(temp->right) st.push(temp->right);
            if(temp->left) st.push(temp->left);
        }
        return ans;
    }
};
