class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        std::ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int product=1,zeros=0,pos,n=nums.size();
        vector<int> ans(n,0);
        
        for(int i=0;i<n;i++){
            if(nums[i]!=0)product*=nums[i];
            else zeros++,pos=i;
            if(zeros>1)return ans;
        }

        if(zeros==1)ans[pos]=product;
        else  for(int i=0;i<n;i++)ans[i]=product/nums[i];
        return ans;

    }
};