class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      int n=nums.size();
      int index=-1;
      for(int i=0;i<n;i++)
      {
          if(nums[i]!=val)
          {
              index++;
              nums[index]=nums[i];
          }
      }
      return index+1;

    }
};