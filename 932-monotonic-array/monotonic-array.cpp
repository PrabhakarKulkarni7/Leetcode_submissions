class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int a=0, b=0, n = nums.size();
        for(int i=0; i<n-1; i++){
            if(nums[i]<=nums[i+1]) a++;
        }
        for(int i=0; i<n-1; i++){
            if(nums[i]>=nums[i+1]) b++;
        }
        if(a == n-1 || b == n-1)return true;
        else return false;
    }
};