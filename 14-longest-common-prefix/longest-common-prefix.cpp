class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n = strs.size();
        string start = strs[0] , end = strs[n-1] , ans="";
        for(int i = 0 ; i <end.size();i++)
        {
            if(start[i]==end[i])
            {
                ans = ans + start[i];
            }
            else break;
        }
        return ans;
    }
};