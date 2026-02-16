/*
GFG: Make Array Beautiful

Approach:
- Use stack.
- If consecutive elements sum to 0 → remove both.

Time Complexity: O(N)
Space Complexity: O(N)
*/

vector<int> makeBeautiful(vector<int> arr) {
    stack<int> st;

    for(int x : arr){
        if(!st.empty() && st.top() + x == 0)
            st.pop();
        else
            st.push(x);
    }

    vector<int> ans(st.size());
    for(int i = st.size()-1; i >= 0; i--){
        ans[i] = st.top();
        st.pop();
    }
    return ans;
}
