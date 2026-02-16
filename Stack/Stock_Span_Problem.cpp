/*
GFG: Stock Span Problem

Approach:
- Use stack storing indices.
- Pop until greater price found.

Time Complexity: O(N)
Space Complexity: O(N)
*/

vector<int> calculateSpan(int price[], int n){
    stack<int> st;
    vector<int> span(n);

    for(int i = 0; i < n; i++){
        while(!st.empty() && price[st.top()] <= price[i])
            st.pop();

        span[i] = st.empty() ? (i+1) : (i - st.top());
        st.push(i);
    }
    return span;
}
