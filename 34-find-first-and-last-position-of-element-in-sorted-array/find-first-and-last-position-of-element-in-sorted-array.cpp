class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    //best solution is using binary search
    int n = nums.size();
    int startPos=-1,endPos=-1;
    for(int i=0;i<n;i++)
    {
        if(nums[i]==target)
        {
            startPos=i;
            break;
        }
    }

    for(int i=n-1;i>=0;i--)
    {
        if(nums[i]==target)
        {
            endPos=i;
            break;
        }
    }
    return{startPos,endPos};
    }  

};