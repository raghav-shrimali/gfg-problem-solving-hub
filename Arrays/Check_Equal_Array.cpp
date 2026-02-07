/*
GFG - Check Equal Array

Approach:
- Count frequency of elements using unordered_map.
- Compare maps.

Time Complexity: O(n)
Space Complexity: O(n)
*/

class Solution {
public:
    bool checkEqual(vector<int>& arr1, vector<int>& arr2) {
        if (arr1.size() != arr2.size())
            return false;

        unordered_map<int, int> mp;

        for (int x : arr1)
            mp[x]++;

        for (int x : arr2) {
            if (mp[x] == 0)
                return false;
            mp[x]--;
        }

        return true;
    }
};
