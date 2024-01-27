class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int,int> mpp;
         //transfering all the elements into the map;
        for(int i = 0 ; i < n ; i++)
        {
            mpp[nums[i]]++;
        }
        //Iterating through the map
        for(auto it : mpp)
        {
            if(it.second > (n/2))
            return it.first;
        }
        return -1;
    }
};

//map<int , int> mpp
// first int wil store value and second int will store count;