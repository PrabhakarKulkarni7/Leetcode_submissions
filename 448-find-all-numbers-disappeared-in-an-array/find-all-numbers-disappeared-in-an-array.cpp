class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        //[1,2,2,3,3,4,7,8]
        int n = nums.size();
        vector<int>temp;
        unordered_map<int,int>mp;
        for(int i=1;i<=n;i++)
        {
            mp[i]++;
        }

        for(auto value:nums)
        {
            mp[value]++;
        }

        for(auto it: mp)
        {
            if(it.second==1)
            {
                temp.push_back(it.first);
            }
        }
        return temp;
    }
};