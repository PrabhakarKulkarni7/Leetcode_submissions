class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
    int p=0;
    map<int,int> mp;
    for(int i=0;i<nums.size();i++){
        p+=nums[i];
        p%=k;
        if(p%k==0 and i) return 1;
        if(mp.find(p)!=mp.end()){
            if(i-mp[p]>1) return 1;
        } else {
            mp[p]=i;
        }
    } 
    return 0;   
    }
};