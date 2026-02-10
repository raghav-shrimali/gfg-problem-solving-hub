/*
GFG Problem: Delete a Node in Single Linked List
Link: https://practice.geeksforgeeks.org/

Approach:
- Traverse till the node before the target position.
- Update next pointer to skip the target node.
- Delete the node.

Time Complexity: O(N)
Space Complexity: O(1)
*/

class Solution {
public:
    Node* deleteNode(Node* head, int x) {
        if (x == 1) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        Node* curr = head;
        for (int i = 1; i < x - 1 && curr; i++) {
            curr = curr->next;
        }

        if (curr && curr->next) {
            Node* temp = curr->next;
            curr->next = temp->next;
            delete temp;
        }
        return head;
    }
};
