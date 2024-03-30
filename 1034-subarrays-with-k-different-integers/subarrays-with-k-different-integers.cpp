class Solution {
public:
    int solve(vector<int>& nums, int k) {
        if (k == 0)
            return 0;
        int ans = 0, n = size(nums);
        unordered_map<int, int> cnt;
        int diff = 0;

        for (int l = 0, r = 0; r < n; r++) {
            if (cnt[nums[r]]++ == 0)
                diff++;

            while (diff > k) {
                if (--cnt[nums[l++]] == 0)
                    diff--;
            }
            ans += (r - l + 1);
        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return solve(nums, k) - solve(nums, k - 1);
    }
};