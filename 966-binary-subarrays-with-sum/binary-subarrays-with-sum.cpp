class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int res = 0; 
        unordered_map<int, int> mp; 
        int prefix = 0;
        mp[0] = 1; // There's one subarray with sum 0, which is the empty subarray
        for (int i = 0; i < nums.size(); i++) {
            prefix += nums[i]; 
            res += mp[prefix - goal]; // Check if there's a prefix sum such that prefix_sum - goal equals the target sum, and add its frequency to the result
            mp[prefix]++; // Increment the frequency count of the current prefix sum in the hashmap
        }
        return res; 
    }
};