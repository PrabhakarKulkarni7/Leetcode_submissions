class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
         int n = nums.size();
         vector<int> temp(n,0);
         int posIndex = 0 , negIndex = 1;
        for(int i = 0 ; i < n ; i++)
        {
            if(nums[i]>=0)
            {
                temp[posIndex] = nums[i];
                posIndex += 2; 
            }
            else
            {
                temp[negIndex] = nums[i];
                negIndex += 2;
            }
        }
        return temp;

    }
};