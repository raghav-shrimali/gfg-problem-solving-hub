/*
GFG - Roman to Integer

Approach:
- Traverse the string from left to right.
- If current value is less than next value, subtract it.
- Otherwise, add it.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int value(char c) {
        if (c == 'I') return 1;
        if (c == 'V') return 5;
        if (c == 'X') return 10;
        if (c == 'L') return 50;
        if (c == 'C') return 100;
        if (c == 'D') return 500;
        if (c == 'M') return 1000;
        return 0;
    }

    int romanToDecimal(string &str) {
        int ans = 0;
        for (int i = 0; i < str.length(); i++) {
            int curr = value(str[i]);
            if (i + 1 < str.length() && curr < value(str[i + 1]))
                ans -= curr;
            else
                ans += curr;
        }
        return ans;
    }
};
