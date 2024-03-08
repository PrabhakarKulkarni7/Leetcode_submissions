class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> freq(101, 0);

        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }

        int ans = 0;
        int temp = 0;

        for (int i = 1; i < 101; i++) {
            if (freq[i] == temp) {
                ans += freq[i];
            } else if (freq[i] > temp) {
                ans = freq[i];
                temp = freq[i];
            }
        }

        return ans;
    }
};