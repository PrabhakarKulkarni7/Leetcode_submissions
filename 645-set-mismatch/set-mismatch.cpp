class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n = nums.size();
        vector<int>result;

        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }

        for(auto it:mp)
        {
            if(it.second==2)
            {
                result.push_back(it.first);
                break;
            }
        }

        for(int i=1;i<=n;i++)
        {
            if(mp.find(i)==mp.end()){
                result.push_back(i);
                break;
            }
        }

        return result;

    }
};