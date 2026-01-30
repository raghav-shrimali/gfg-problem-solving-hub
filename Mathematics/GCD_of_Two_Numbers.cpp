/*
GFG - GCD of Two Numbers

Approach:
- Use Euclid's Algorithm.
- Repeatedly replace (a, b) with (b, a % b)
- Stop when b becomes 0.

Time Complexity: O(log(min(a, b)))
Space Complexity: O(1)
*/

class Solution {
public:
    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};
