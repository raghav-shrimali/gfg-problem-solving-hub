/*
GFG - Binary Search in Array

Approach:
- Apply binary search on sorted array.

Time Complexity: O(log n)
Space Complexity: O(1)
*/

class Solution {
public:
    int binarysearch(vector<int> &arr, int k) {
        int low = 0, high = arr.size() - 1;

        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(arr[mid] == k) return mid;
            else if(arr[mid] < k) low = mid + 1;
            else high = mid - 1;
        }
        return -1;
    }
};
