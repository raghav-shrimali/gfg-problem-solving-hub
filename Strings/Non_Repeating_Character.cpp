/*
GFG - Non Repeating Character

Approach:
- Count frequency of each character.
- Traverse string again to find first character with frequency 1.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    char nonRepeatingChar(string &s) {
        int freq[26] = {0};

        for (char c : s)
            freq[c - 'a']++;

        for (char c : s) {
            if (freq[c - 'a'] == 1)
                return c;
        }
        return '$';
    }
};
