class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n); // Create a result vector of the same size as nums
        int left = 0, right = n - 1; // Pointers for the two ends of the array

        // Loop from the end of the result vector to the beginning
        for (int i = n - 1; i >= 0; i--) {
            // Compare absolute values of elements at left and right pointers
            if (abs(nums[left]) > abs(nums[right])) {
                result[i] = nums[left] * nums[left]; // Square the left element
                left++; // Move left pointer towards right
            } else {
                result[i] = nums[right] * nums[right]; // Square the right element
                right--; // Move right pointer towards left
            }
        }

        return result; // Return the sorted squares
    }
};
