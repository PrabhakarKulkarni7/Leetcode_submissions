class Solution {
public:
    int findMax(vector<int>& nums) {
        int maxi = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > maxi) {
                maxi = nums[i];
            }
        }
        return maxi;
    }

    long long cacluateSum(vector<int>& nums, int div) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum = sum + ceil(double(nums[i]) / double(div));
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = findMax(nums);
        while (low <= high) {
            int mid = (low + high) / 2;
            long long ans = cacluateSum(nums, mid);
            if (ans <= threshold) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};