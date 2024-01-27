class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
        {
            return false;
        }
        unordered_map<char,int>mp;
        for(int i = 0 ; i < s.size();i++)
        {
            mp[s[i]-'A']++;
        }

         for(int i = 0 ; i < t.size();i++)
        {
            mp[t[i]-'A']--;
        }

        for(auto ele:mp)
        {
            if(ele.second !=0)
            return false; 
        }
        return true;
    }
};