/*
Problem: Zero Sum Subarrays
Platform: GeeksforGeeks

Approach:
- Use prefix sum and hashmap.
- If prefix sum repeats, subarray sum = 0.

Time Complexity: O(N)
Space Complexity: O(N)
*/

class Solution{
  public:
    long long findSubarray(vector<long long> &arr, int n ) {
        unordered_map<long long, long long> mp;
        
        long long sum = 0;
        long long count = 0;
        
        mp[0] = 1;  // Important: handles subarrays starting from index 0
        
        for(int i = 0; i < n; i++)
        {
            sum += arr[i];
            
            if(mp.find(sum) != mp.end())
                count += mp[sum];
            
            mp[sum]++;
        }
        
        return count;
    }
};
