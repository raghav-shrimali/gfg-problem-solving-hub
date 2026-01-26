/*
GeeksforGeeks - String Rotated by 2 Places

Approach:
- Rotate the string clockwise and anti-clockwise by 2 places
- Compare with the target string

Time Complexity: O(n)
Space Complexity: O(n)
*/

class Solution {
public:
    bool isRotated(string s1, string s2) {
        if (s1.length() != s2.length())
            return false;

        int n = s1.length();

        // Clockwise rotation by 2
        string clockwise = s1.substr(n - 2, 2) + s1.substr(0, n - 2);

        // Anti-clockwise rotation by 2
        string anticlockwise = s1.substr(2) + s1.substr(0, 2);

        return (clockwise == s2 || anticlockwise == s2);
    }
};
