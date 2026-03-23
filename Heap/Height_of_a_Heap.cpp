/*
Problem: Height of a Heap
Platform: GeeksforGeeks

Approach:
Height = floor(log2(N))

Time Complexity: O(1)
Space Complexity: O(1)
*/

class Solution {
  public:
    int heapHeight(int N) {
        return floor(log2(N));
    }
};
