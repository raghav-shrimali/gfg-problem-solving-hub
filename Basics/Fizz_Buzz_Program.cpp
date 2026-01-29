/*
GeeksforGeeks - Fizz Buzz Program

Approach:
- Iterate from 1 to n
- Apply divisibility rules for Fizz, Buzz, and FizzBuzz

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result;

        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 && i % 5 == 0)
                result.push_back("FizzBuzz");
            else if (i % 3 == 0)
                result.push_back("Fizz");
            else if (i % 5 == 0)
                result.push_back("Buzz");
            else
                result.push_back(to_string(i));
        }
        return result;
    }
};
