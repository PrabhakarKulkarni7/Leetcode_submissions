class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;

        vector <pair<int, char>> v;

        for (auto i : s)
        {
            mp[i]++;
        }

        for (auto i : mp)
        {
            v.push_back({i.second, i.first});
        }

        sort(v.begin(), v.end(), greater<pair<int, char>>());

        string ans = "";

        for (auto i : v)
        {
            while (i.first)
            {
                ans += i.second;
                i.first--;
            } 
        }
        return ans;
    }
};