/*
GFG - Largest in Array

Approach:
- Traverse the array and track maximum element.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int largest(vector<int> &arr) {
        int maxi = arr[0];
        for(int x : arr)
            maxi = max(maxi, x);
        return maxi;
    }
};
