/*
GFG Problem: Find length of Loop in Linked List

Approach:
- Use Floyd’s Cycle Detection (Slow & Fast pointer).
- When they meet, move one pointer and count length of loop.

Time Complexity: O(N)
Space Complexity: O(1)
*/

class Solution {
public:
    int countNodesinLoop(Node *head) {
        Node *slow = head, *fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                int count = 1;
                Node* temp = slow->next;
                while (temp != slow) {
                    count++;
                    temp = temp->next;
                }
                return count;
            }
        }
        return 0;
    }
};
