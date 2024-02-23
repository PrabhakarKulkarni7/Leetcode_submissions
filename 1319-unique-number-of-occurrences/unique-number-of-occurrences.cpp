class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> m, occ;
        for (auto &x : arr)
            m[x]++;
        for (auto &x : m) {
            occ[x.second]++;
            if (occ[x.second] > 1) 
                return false;
        }
        return true;
    }
};