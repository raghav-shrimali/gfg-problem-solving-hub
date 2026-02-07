/*
GFG - Check if Array is Sorted

Approach:
- Compare adjacent elements.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    bool isSorted(vector<int>& arr) {
        for (int i = 0; i < arr.size() - 1; i++) {
            if (arr[i] > arr[i + 1])
                return false;
        }
        return true;
    }
};
