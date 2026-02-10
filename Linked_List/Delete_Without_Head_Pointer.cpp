/*
GFG Problem: Delete without head pointer
Link: https://practice.geeksforgeeks.org/

Approach:
- Copy data from next node into current node.
- Delete the next node.
- Works only when node is NOT the last node.

Time Complexity: O(1)
Space Complexity: O(1)
*/

class Solution {
public:
    void deleteNode(Node* del_node) {
        if (del_node == NULL || del_node->next == NULL)
            return;

        Node* temp = del_node->next;
        del_node->data = temp->data;
        del_node->next = temp->next;
        delete temp;
    }
};
