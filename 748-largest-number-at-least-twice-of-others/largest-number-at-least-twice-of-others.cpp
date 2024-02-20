class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();
        int maxi=INT_MIN;
        int index = 0;
        {
            for(int i=0;i<n;i++)
            {
                if(nums[i]>maxi)
                {
                    maxi=nums[i];
                    index = i;
                }
            }
        } 
        // maxi = 6;
        int ans = -1;
        for(int i=0;i<n;i++)
        {
            if(maxi<2*nums[i] && nums[i]!=maxi)
            {
                return -1;
            }
        }
        return index;
    }
};