/*
GeeksforGeeks - Missing and Repeating Number

Approach:
- Use mathematical formulas for sum and sum of squares.
- Compute difference between expected and actual sums.
- Solve equations to find missing and repeating numbers.

Time Complexity: O(N)
Space Complexity: O(1)
*/

class Solution {
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        long long S = (long long)n * (n + 1) / 2;
        long long P = (long long)n * (n + 1) * (2 * n + 1) / 6;

        long long S1 = 0, P1 = 0;

        for (int x : arr) {
            S1 += x;
            P1 += (long long)x * x;
        }

        long long diff = S - S1;          // missing - repeating
        long long sqDiff = P - P1;        // missing^2 - repeating^2

        long long sum = sqDiff / diff;    // missing + repeating

        long long missing = (diff + sum) / 2;
        long long repeating = sum - missing;

        return {(int)repeating, (int)missing};
    }
};
