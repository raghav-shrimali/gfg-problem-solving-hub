/*
GFG - Remove Duplicates

Approach:
- Use a boolean array of size 26 to track visited characters.
- Add character to result only if not visited before.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    string removeDups(string str) {
        vector<bool> visited(26, false);
        string ans = "";

        for (char c : str) {
            if (!visited[c - 'a']) {
                visited[c - 'a'] = true;
                ans += c;
            }
        }
        return ans;
    }
};
