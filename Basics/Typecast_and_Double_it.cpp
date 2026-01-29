/*
GeeksforGeeks - Typecast and Double it

Approach:
- Convert float to int using typecasting
- Multiply the integer by 2

Time Complexity: O(1)
Space Complexity: O(1)
*/

class Solution {
public:
    int typeCast(double a) {
        int x = (int)a;
        return 2 * x;
    }
};
