/*
GFG - Min and Max in Array

Approach:
- Single traversal to find min and max.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    vector<int> getMinMax(vector<int>& arr) {
        int mn = INT_MAX;
        int mx = INT_MIN;

        for (int x : arr) {
            mn = min(mn, x);
            mx = max(mx, x);
        }

        return {mn, mx};
    }
};
