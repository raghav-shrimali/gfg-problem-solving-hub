/*
GFG - Most Frequent Character

Approach:
- Use frequency array of size 26.
- Count frequency of each character.
- Return character with maximum frequency.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    char getMaxOccuringChar(string str) {
        int freq[26] = {0};

        for (char c : str)
            freq[c - 'a']++;

        int maxFreq = 0;
        char result = str[0];

        for (int i = 0; i < 26; i++) {
            if (freq[i] > maxFreq) {
                maxFreq = freq[i];
                result = char(i + 'a');
            }
        }
        return result;
    }
};
