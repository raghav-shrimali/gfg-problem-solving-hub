/*
GFG: Print Bracket Number

Approach:
- Use stack.
- Assign increasing number to '('.
- Print same number for matching ')'.

Time Complexity: O(N)
Space Complexity: O(N)
*/

vector<int> bracketNumbers(string str) {
    stack<int> st;
    vector<int> result;
    int num = 0;

    for(char ch : str){
        if(ch == '('){
            num++;
            st.push(num);
            result.push_back(num);
        }
        else if(ch == ')'){
            result.push_back(st.top());
            st.pop();
        }
    }
    return result;
}
