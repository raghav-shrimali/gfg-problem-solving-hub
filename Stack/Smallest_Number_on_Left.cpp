/*
GFG: Smallest number on left

Approach:
- Maintain stack of smaller elements.

Time Complexity: O(N)
Space Complexity: O(N)
*/

vector<int> leftSmaller(int n, int a[]){
    stack<int> st;
    vector<int> ans;

    for(int i = 0; i < n; i++){
        while(!st.empty() && st.top() >= a[i])
            st.pop();

        if(st.empty())
            ans.push_back(-1);
        else
            ans.push_back(st.top());

        st.push(a[i]);
    }
    return ans;
}
