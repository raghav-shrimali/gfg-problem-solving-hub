/*
GFG - Check for Binary String

Approach:
- Traverse the string.
- If any character other than '0' or '1' is found, return false.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    bool isBinary(string str) {
        for(char c : str) {
            if(c != '0' && c != '1')
                return false;
        }
        return true;
    }
};
