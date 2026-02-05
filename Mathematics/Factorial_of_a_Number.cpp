/*
GFG - Factorial of a Number

Approach:
- Multiply numbers from 1 to n.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    long long factorial(int n) {
        long long ans = 1;
        for (int i = 1; i <= n; i++)
            ans *= i;
        return ans;
    }
};
