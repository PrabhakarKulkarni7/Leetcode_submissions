class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size())
            return false;
        unordered_map<char, char> mp1;
        unordered_map<char, char> mp2;

        for (int i = 0; i < s.size(); ++i) {
            if (mp1[s[i]] == 0) {
                mp1[s[i]] = t[i];
            }

            else if (mp1[s[i]] != t[i])
                return false;

            if (mp2[t[i]] == 0) {
                mp2[t[i]] = s[i];
            } else if (mp2[t[i]] != s[i])
                return false;
        }

        return true;
    }
};