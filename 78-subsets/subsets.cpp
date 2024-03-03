class Solution {
public:  
   
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans; // Container to store subsets
        int num = pow(2, nums.size()) - 1; // Total number of subsets

        // Loop through all possible combinations
        for(int i = 0; i <= num; i++) {
            vector<int> st; // Temporary storage for subsets
            int index = 0, result = num & i; // Bit Masking

            // Extract elements based on the bitmask
            while(index < nums.size() && result) {
                if((result & 1) == 1) // If the bit is set, include the element
                    st.push_back(nums[index]); 
                result = result >> 1; // Right shift the result to get the next bit
                index++; // Move to the next element in nums
            }
            ans.push_back(st); // Add the subset to the result
        } 
        return ans; // Return all subsets
    }
};
