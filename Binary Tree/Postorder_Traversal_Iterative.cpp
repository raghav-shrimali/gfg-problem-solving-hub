/*
GFG - Postorder Traversal (Iterative)
Order: Left -> Right -> Root
Approach: Use Two Stacks

Time Complexity: O(N)
Space Complexity: O(N)
*/

class Solution {
public:
    vector<int> postOrder(Node* root) {
        vector<int> ans;
        if(!root) return ans;

        stack<Node*> st1, st2;
        st1.push(root);

        while(!st1.empty()) {
            Node* temp = st1.top();
            st1.pop();
            st2.push(temp);

            if(temp->left) st1.push(temp->left);
            if(temp->right) st1.push(temp->right);
        }

        while(!st2.empty()) {
            ans.push_back(st2.top()->data);
            st2.pop();
        }

        return ans;
    }
};
