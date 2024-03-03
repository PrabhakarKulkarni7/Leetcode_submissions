class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size(); 
        int low = 0; 
        int high = n - 1; 
        while (low <= high) { // Perform binary search until lower bound is less than or equal to upper bound
            int mid = (low + high) / 2; // Calculate the middle index
            if (nums[mid] == target) // If the middle element is the target, return its index
                return mid;
            if (nums[low] <= nums[mid]) { // If left half is sorted
                if (nums[low] <= target && target <= nums[mid]) { // Check if target lies in the left half
                    high = mid - 1; // Adjust upper bound
                } else {
                    low = mid + 1; // Adjust lower bound
                }
            } else { // If right half is sorted
                if (nums[mid] <= target && target <= nums[high]) { // Check if target lies in the right half
                    low = mid + 1; // Adjust lower bound
                } else {
                    high = mid - 1; // Adjust upper bound
                }
            }
        }
        return -1; // If target is not found, return -1
    }
};
