/*
GFG Problem: Remove duplicate element from sorted Linked List

Approach:
- Traverse list.
- If current->data == current->next->data → remove next.

Time Complexity: O(N)
Space Complexity: O(1)
*/

class Solution {
public:
    Node* removeDuplicates(Node* head) {
        Node* curr = head;

        while (curr && curr->next) {
            if (curr->data == curr->next->data) {
                Node* temp = curr->next;
                curr->next = temp->next;
                delete temp;
            } else {
                curr = curr->next;
            }
        }
        return head;
    }
};
