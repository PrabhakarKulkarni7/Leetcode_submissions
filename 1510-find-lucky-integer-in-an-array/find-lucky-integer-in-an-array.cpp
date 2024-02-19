class Solution {
public:
	int findLucky(vector<int>& arr) {
		map<int,int>mp;
		int ans=-1;
		for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
		for(auto i:mp)
        {
			if(i.first==i.second)
             ans=max(ans,i.first);
		}
		return ans;
	}
};