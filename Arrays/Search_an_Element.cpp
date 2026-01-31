/*
GFG - Search an Element in an Array

Approach:
- Linear search through the array.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int search(int arr[], int n, int x) {
        for(int i = 0; i < n; i++) {
            if(arr[i] == x)
                return i;
        }
        return -1;
    }
};
