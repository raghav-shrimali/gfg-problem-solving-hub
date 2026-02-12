/*
GFG Problem: Remove Loop in Linked List

Problem Statement:
Given a linked list that may contain a loop,
remove the loop and make the linked list linear.

Approach:
1. Use Floyd’s Cycle Detection Algorithm (Slow & Fast pointers)
   to detect if a loop exists.
2. If loop exists:
   - Move one pointer to head.
   - Move both pointers one step at a time.
   - When they meet, that node is the starting point of loop.
3. Traverse until the node just before loop start.
4. Set its next pointer to NULL.

Time Complexity: O(N)
Space Complexity: O(1)
*/

class Solution {
public:
    void removeLoop(Node* head) {
        if (!head || !head->next)
            return;

        Node *slow = head, *fast = head;

        // Step 1: Detect loop
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                
                // Step 2: Find start of loop
                slow = head;
                Node* prev = NULL;

                while (slow != fast) {
                    prev = fast;
                    slow = slow->next;
                    fast = fast->next;
                }

                // Step 3: Remove loop
                prev->next = NULL;
                return;
            }
        }
    }
};
