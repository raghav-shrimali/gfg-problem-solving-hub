/*
GFG: Insert element at bottom of stack

Approach:
- Use recursion.
- Pop all elements.
- Insert element when stack empty.
- Push elements back.

Time Complexity: O(N)
Space Complexity: O(N)
*/

class Solution {
public:
    stack<int> insertAtBottom(stack<int> st, int x) {
        if (st.empty()) {
            st.push(x);
            return st;
        }

        int top = st.top();
        st.pop();
        st = insertAtBottom(st, x);
        st.push(top);
        return st;
    }
};
