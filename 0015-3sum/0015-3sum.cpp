class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // Get the size of the input vector
        int n = nums.size();

        // Sort the input vector to simplify the search process
        sort(nums.begin(), nums.end());

        // Vector to store the resulting triplets
        vector<vector<int>> ans;

        // Loop through each element in the sorted vector
        for (int i = 0; i < n; i++) {
            // Skip duplicates of the first element to avoid duplicate triplets
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            // Pointers for the second and third elements of the triplet
            int j = i + 1;
            int k = n - 1;

            // While the second pointer is less than the third pointer
            while (j < k) {
                // Calculate the sum of the current triplet
                int sum = nums[i] + nums[j] + nums[k];

                // If the sum is less than 0, move the second pointer to the
                // right
                if (sum < 0) {
                    j++;
                }
                // If the sum is greater than 0, move the third pointer to the
                // left
                else if (sum > 0) {
                    k--;
                }
                // If the sum is zero, we found a triplet
                else {
                    // Add the triplet to the result vector
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    ans.push_back(temp);

                    // Move the second pointer to the right and the third
                    // pointer to the left
                    j++;
                    k--;

                    // Skip duplicates of the second and third elements
                    while (j < k && nums[j] == nums[j - 1])
                        j++;
                    while (j < k && nums[k] == nums[k + 1])
                        k--;
                }
            }
        }
        // Return the resulting vector of triplets
        return ans;
    }
};
