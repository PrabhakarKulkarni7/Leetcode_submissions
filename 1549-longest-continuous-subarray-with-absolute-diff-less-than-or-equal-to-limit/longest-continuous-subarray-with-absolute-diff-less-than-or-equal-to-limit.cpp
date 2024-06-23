class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        multiset<int>s1;
          int i,j=0,n=nums.size(),ans=1;
         
          
          for(i=0;i<n;i++)
          {
            s1.insert(nums[i]);
        
             while(abs(*s1.rbegin()-*s1.begin())>limit)
             {
                s1.erase(s1.find(nums[j]));
                
                j++;
             }
             ans = max(ans, i - j + 1);
          }
          return ans;


    }
};