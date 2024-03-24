class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>mp;
        //transfering the elements into the map;
        for(auto ele:nums)
        {
            mp[ele]++;
        }

        //iterating throught the map;
        for(auto i:mp)
        {
            if(i.second>1)          //checking for the count
            return i.first;
        }
        return -1;
    }
};