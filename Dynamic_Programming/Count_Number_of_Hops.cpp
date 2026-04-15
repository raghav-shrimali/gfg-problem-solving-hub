/*
Problem: Count Number of Hops
Platform: GeeksforGeeks

Approach:
- DP with space optimization
- dp[i] = dp[i-1] + dp[i-2] + dp[i-3]

Time Complexity: O(N)
Space Complexity: O(1)
*/

class Solution {
  public:
    long long countWays(int n) {
        
        if(n == 0) return 1;
        if(n == 1) return 1;
        if(n == 2) return 2;
        
        long long a = 1, b = 1, c = 2;
        
        for(int i = 3; i <= n; i++)
        {
            long long d = a + b + c;
            a = b;
            b = c;
            c = d;
        }
        
        return c;
    }
};
