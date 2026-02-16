/*
GFG: String Manipulation

Approach:
- Remove consecutive duplicate characters.

Time Complexity: O(N)
Space Complexity: O(N)
*/

string removeConsecutiveCharacter(string S) {
    string result = "";
    result += S[0];

    for(int i = 1; i < S.size(); i++){
        if(S[i] != S[i-1])
            result += S[i];
    }
    return result;
}
