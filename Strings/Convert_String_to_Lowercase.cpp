/*
GFG - Convert String to Lower Case

Approach:
- Traverse the string.
- Convert uppercase characters to lowercase using tolower().

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    string toLower(string s) {
        for (char &c : s) {
            if (c >= 'A' && c <= 'Z') {
                c = tolower(c);
            }
        }
        return s;
    }
};
