class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       
       /* int n = nums.size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            int sum = 0;
            for(int j=i;j<n;j++)
            {
                sum = sum + nums[j];
                if(sum==k)
                {
                    count++;
                }
            }
        }
        return count;
        */
        int n=nums.size();
        int preSum = 0, count=0;
        map<int,int>mpp;
        mpp[0] = 1;
        for(int i=0;i<n;i++)
        {
           preSum = preSum + nums[i];
            int remove = preSum - k;
            count = count + mpp[remove];
            mpp[preSum] = mpp[preSum] + 1;
        }
        return count;
       
 
    }
};