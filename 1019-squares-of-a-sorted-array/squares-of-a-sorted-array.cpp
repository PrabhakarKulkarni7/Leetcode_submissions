class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int>temp;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;++i)
        {
            int ans = nums[i]*nums[i];
            temp.push_back(ans);
        }
        sort(temp.begin(),temp.end());
        return temp;
    }
};