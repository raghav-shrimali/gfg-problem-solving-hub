/*
GFG - Isomorphic Strings

Approach:
- Maintain two hash maps to ensure one-to-one mapping.
- Check consistency of mapping at every index.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    bool areIsomorphic(string s, string t) {
        if (s.length() != t.length())
            return false;

        unordered_map<char, char> mp1, mp2;

        for (int i = 0; i < s.length(); i++) {
            char c1 = s[i];
            char c2 = t[i];

            if (mp1.count(c1)) {
                if (mp1[c1] != c2)
                    return false;
            } else {
                mp1[c1] = c2;
            }

            if (mp2.count(c2)) {
                if (mp2[c2] != c1)
                    return false;
            } else {
                mp2[c2] = c1;
            }
        }
        return true;
    }
};
