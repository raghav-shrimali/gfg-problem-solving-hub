/*
GFG Problem: Detect Loop in Linked List

Approach:
- Use Floyd’s Cycle Detection Algorithm.
- If slow == fast → loop exists.

Time Complexity: O(N)
Space Complexity: O(1)
*/

class Solution {
public:
    bool detectLoop(Node* head) {
        Node *slow = head, *fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
                return true;
        }
        return false;
    }
};
