/*
GFG Problem: Merge Two Sorted Linked Lists

Approach:
- Use dummy node.
- Compare nodes and attach smaller one.

Time Complexity: O(N + M)
Space Complexity: O(1)
*/

class Solution {
public:
    Node* sortedMerge(Node* head1, Node* head2) {
        Node dummy(-1);
        Node* tail = &dummy;

        while (head1 && head2) {
            if (head1->data < head2->data) {
                tail->next = head1;
                head1 = head1->next;
            } else {
                tail->next = head2;
                head2 = head2->next;
            }
            tail = tail->next;
        }

        tail->next = head1 ? head1 : head2;
        return dummy.next;
    }
};
