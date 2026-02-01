/*
GFG - First Occurrence of String

Approach:
- Use built-in find() function.
- Returns index of first occurrence or -1.

Time Complexity: O(n * m)
Space Complexity: O(1)
*/

class Solution {
public:
    int firstOccurence(string txt, string pat) {
        int pos = txt.find(pat);
        if (pos == string::npos)
            return -1;
        return pos;
    }
};
