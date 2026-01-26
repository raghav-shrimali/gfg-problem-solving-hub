/*
GeeksforGeeks - Sort a String

Approach:
- Sort characters of the string using STL sort()

Time Complexity: O(n log n)
Space Complexity: O(1)
*/

class Solution {
public:
    string sort(string s) {
        sort(s.begin(), s.end());
        return s;
    }
};
