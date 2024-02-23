class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> count;

        for(int n : arr)
        {
            count[n]++;
        }

        unordered_set<int> unique;

        for(auto& pair : count)
        {
            if(!unique.insert(pair.second).second)
            {
                return false;
            }
        }

        return true;
    }
};