/*
GFG - Diagonal Traversal of Binary Tree
Approach: Queue + Right Traversal

Time: O(N)
Space: O(N)
*/

class Solution {
public:
    vector<int> diagonal(Node *root) {
        vector<int> ans;
        if(!root) return ans;

        queue<Node*> q;
        q.push(root);

        while(!q.empty()) {
            Node* temp = q.front();
            q.pop();

            while(temp) {
                ans.push_back(temp->data);

                if(temp->left)
                    q.push(temp->left);

                temp = temp->right;
            }
        }

        return ans;
    }
};
