// GFG Problem: Search in a Row-Column Sorted Matrix
// Approach: Staircase Search (Top-Right Corner)
// Time Complexity: O(n + m)
// Space Complexity: O(1)

class Solution {
public:
    bool matSearch(vector<vector<int>>& mat, int x) {

        int n = mat.size();        // number of rows
        int m = mat[0].size();     // number of columns

        int row = 0;
        int col = m - 1;           // start from top-right corner

        while (row < n && col >= 0) {
            if (mat[row][col] == x)
                return true;
            else if (mat[row][col] < x)
                row++;             // move down
            else
                col--;             // move left
        }
        return false;
    }
};
