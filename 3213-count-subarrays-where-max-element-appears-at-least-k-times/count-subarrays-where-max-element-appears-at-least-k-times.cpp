class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int totalLength = nums.size();
        int MAX_ELEMENT = nums[0];
        for (int i = 1; i < totalLength; i++) {
            if (nums[i] > MAX_ELEMENT) {
                MAX_ELEMENT = nums[i];
            }
        }
        vector<int> dp(totalLength, 0);
        if (nums[0] == MAX_ELEMENT) {
            dp[0] = 1;
        };
        for (int i = 1; i < totalLength; i++) {
            if (nums[i] == MAX_ELEMENT) {
                dp[i] = dp[i - 1] + 1;
            } else {
                dp[i] = dp[i - 1];
            }
        }
        if (dp[totalLength - 1] < k) {
            return 0;
        }
        int l = 0;
        int r = 0;
        for (int i = k-1; i < totalLength; i++) {
            if(dp[i] >= k) {
                r=i;
                break;
            }
        }
        long long  totalCount = 0;
        if(r <  totalLength) {
            totalCount += totalLength-r;
        }
        while(r < totalLength) {
            if(dp[r]-dp[l] >= k) {
                totalCount += totalLength-r;
                l++;
            } else {
                r++;
            }           
        }
    return totalCount;
    }
};