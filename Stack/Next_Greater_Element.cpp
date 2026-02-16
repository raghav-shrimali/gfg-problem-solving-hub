/*
GFG: Next Greater Element

Approach:
- Traverse from right.
- Use stack to track greater elements.

Time Complexity: O(N)
Space Complexity: O(N)
*/

vector<long long> nextLargerElement(vector<long long> arr, int n){
    stack<long long> st;
    vector<long long> ans(n);

    for(int i = n-1; i >= 0; i--){
        while(!st.empty() && st.top() <= arr[i])
            st.pop();

        ans[i] = st.empty() ? -1 : st.top();
        st.push(arr[i]);
    }
    return ans;
}
