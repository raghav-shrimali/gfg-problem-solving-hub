/*
GFG Problem: Remove every k-th node
Link: https://practice.geeksforgeeks.org/

Approach:
- Traverse the linked list while keeping a counter.
- When count becomes k, remove the node.
- Reset counter and continue traversal.

Time Complexity: O(N)
Space Complexity: O(1)
*/

class Solution {
public:
    Node* deleteK(Node* head, int K) {
        if (K == 1) return NULL;

        Node* curr = head;
        Node* prev = NULL;
        int count = 1;

        while (curr) {
            if (count == K) {
                prev->next = curr->next;
                delete curr;
                curr = prev->next;
                count = 1;
            } else {
                prev = curr;
                curr = curr->next;
                count++;
            }
        }
        return head;
    }
};
