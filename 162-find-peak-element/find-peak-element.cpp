class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size(); // Size of the array

        // Handling the edge cases
        if(n==1) return 0;
        if(nums[0] > nums[1])return 0;
        if(nums[n-1] > nums[n-2]) return n -1 ;

        int low = 1 , high = n - 2;
        while(low<=high)
        {
            int mid = (low + high ) / 2 ;

            //if nums[mid] is the peak
            if(nums[mid] > nums[mid + 1] && nums[mid] > nums[mid - 1])
                 return mid;

            // If we are in the left
            else if(nums[mid] > nums[mid - 1])   
                low = mid + 1;

            //If we are in the right or nums[mid] is common point
            else
                 high = mid - 1;
        }
        // No element/dummy statement.
        return -1;
    }
};