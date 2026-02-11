/*
GFG Problem: Sort a linked list of 0s, 1s and 2s

Approach:
- Count number of 0s, 1s, 2s.
- Rewrite values in list.

Time Complexity: O(N)
Space Complexity: O(1)
*/

class Solution {
public:
    Node* segregate(Node *head) {
        int count[3] = {0};

        Node* temp = head;
        while (temp) {
            count[temp->data]++;
            temp = temp->next;
        }

        temp = head;
        int i = 0;
        while (temp) {
            if (count[i] == 0)
                i++;
            else {
                temp->data = i;
                count[i]--;
                temp = temp->next;
            }
        }
        return head;
    }
};
