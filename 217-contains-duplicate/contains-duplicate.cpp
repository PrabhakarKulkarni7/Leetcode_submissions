class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
    set<int> s(nums.begin(),nums.end());
        int x = nums.size();
        int y = s.size();
        if(x==y)
        return false;
        else
        return true;
    }
};

