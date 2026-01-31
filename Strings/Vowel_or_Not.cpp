/*
GFG - Vowel or Not

Approach:
- Check if character belongs to vowel set.

Time Complexity: O(1)
Space Complexity: O(1)
*/

class Solution {
public:
    string isVowel(char c) {
        c = tolower(c);
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            return "YES";
        return "NO";
    }
};
