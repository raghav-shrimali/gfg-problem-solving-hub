/*
GFG - Array Duplicates

Approach:
- Count frequency using an auxiliary array.
- Collect elements with frequency > 1.

Time Complexity: O(n)
Space Complexity: O(n)
*/

class Solution {
public:
    vector<int> duplicates(int arr[], int n) {
        vector<int> freq(n, 0);
        vector<int> ans;

        for (int i = 0; i < n; i++)
            freq[arr[i]]++;

        for (int i = 0; i < n; i++) {
            if (freq[i] > 1)
                ans.push_back(i);
        }

        if (ans.empty())
            return {-1};

        return ans;
    }
};
