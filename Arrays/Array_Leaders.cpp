/*
GFG - Array Leaders

Approach:
- Traverse from right.
- Keep track of maximum from right.

Time Complexity: O(n)
Space Complexity: O(n)
*/

class Solution {
public:
    vector<int> leaders(int a[], int n) {
        vector<int> ans;
        int maxFromRight = a[n-1];
        ans.push_back(maxFromRight);

        for(int i = n-2; i >= 0; i--) {
            if(a[i] >= maxFromRight) {
                maxFromRight = a[i];
                ans.push_back(a[i]);
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
