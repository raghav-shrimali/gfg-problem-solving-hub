/*
GFG - Two Sum Pair with Given Value (Alternative Approach)

Approach:
- Sort the array.
- Use two pointers to find the target sum.

Time Complexity: O(n log n)
Space Complexity: O(1)   // ignoring sorting space
*/

class Solution {
public:
    bool twoSum(vector<int>& arr, int x) {
        sort(arr.begin(), arr.end());

        int l = 0, r = arr.size() - 1;

        while (l < r) {
            int sum = arr[l] + arr[r];

            if (sum == x)
                return true;
            else if (sum < x)
                l++;
            else
                r--;
        }
        return false;
    }
};
