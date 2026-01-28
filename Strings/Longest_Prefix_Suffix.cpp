/*
GeeksforGeeks - Longest Prefix Suffix

Approach:
- Use KMP preprocessing to build LPS array
- The last LPS value gives the longest prefix
  which is also a suffix

Time Complexity: O(n)
Space Complexity: O(n)
*/

class Solution {
public:
    int lps(string s) {
        int n = s.length();
        vector<int> lps(n, 0);

        int len = 0;
        int i = 1;

        while (i < n) {
            if (s[i] == s[len]) {
                len++;
                lps[i] = len;
                i++;
            } else {
                if (len != 0) {
                    len = lps[len - 1];
                } else {
                    lps[i] = 0;
                    i++;
                }
            }
        }
        return lps[n - 1];
    }
};
