/*
GFG - Palindrome String

Approach:
- Use two pointers from start and end.
- Compare characters until pointers cross.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int isPalindrome(string S) {
        int l = 0, r = S.size() - 1;
        while (l < r) {
            if (S[l] != S[r])
                return 0;
            l++;
            r--;
        }
        return 1;
    }
};
