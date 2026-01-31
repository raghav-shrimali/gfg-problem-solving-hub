/*
GFG - Reverse a String

Approach:
- Use two-pointer swapping.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    string reverseWord(string str) {
        int l = 0, r = str.size() - 1;
        while(l < r) {
            swap(str[l], str[r]);
            l++, r--;
        }
        return str;
    }
};
