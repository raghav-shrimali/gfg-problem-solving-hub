/*
GFG: Get minimum at pop

Approach:
- Maintain auxiliary stack storing minimums.

Time Complexity: O(1)
Space Complexity: O(N)
*/

class SpecialStack {
    stack<int> st, minSt;

public:
    void push(int x) {
        st.push(x);
        if (minSt.empty() || x <= minSt.top())
            minSt.push(x);
    }

    void pop() {
        if (st.top() == minSt.top())
            minSt.pop();
        st.pop();
    }

    int getMin() {
        return minSt.top();
    }
};
