class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size(); // Size of the array
        int low = 0, high = n - 1;

        while (low <= high) {
            int mid = (low + high) / 2;
        // If mid points to the target
            if (nums[mid] == target)
                return true;
        // Edge case : if nums[low]==nums[mid]==nums[high]
            if (nums[low] == nums[mid] && nums[mid] == nums[high]) {
                low = low + 1;
                high = high - 1;
                continue;
            }
        // If left part is sorted
            if (nums[low] <= nums[mid])
            {
                if (nums[low] <= target && target <= nums[mid])
                // Element exists
                    high = mid - 1;
                else
                // does not exists
                    low = mid + 1;
            } 
        // If right part is sorted
            else {
                if (nums[mid] <= target && target <= nums[high]) 
                // Element exits
                    low = mid + 1;
                 else 
                // does not exist
                    high = mid - 1;
                }
        }
        return false;
    }
};

// If helped please upvote :)