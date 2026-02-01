/*
GFG - Anagram

Approach:
- Use frequency array of size 26.
- Increment for first string, decrement for second.
- If all counts are zero, strings are anagrams.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    bool isAnagram(string a, string b) {
        if (a.size() != b.size()) return false;

        int freq[26] = {0};
        for (int i = 0; i < a.size(); i++) {
            freq[a[i] - 'a']++;
            freq[b[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0)
                return false;
        }
        return true;
    }
};
