/*
GeeksforGeeks - Majority Element

Approach: Moore’s Voting Algorithm
- Identify a potential majority candidate in one traversal
- Verify the candidate in another traversal

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        int candidate = -1, count = 0;
        int n = arr.size();

        // Step 1: Find potential candidate
        for (int i = 0; i < n; i++) {
            if (count == 0) {
                candidate = arr[i];
                count = 1;
            } else if (arr[i] == candidate) {
                count++;
            } else {
                count--;
            }
        }

        // Step 2: Verify candidate
        count = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == candidate)
                count++;
        }

        return (count > n / 2) ? candidate : -1;
    }
};
