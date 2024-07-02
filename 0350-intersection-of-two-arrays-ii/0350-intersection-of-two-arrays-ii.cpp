class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        unordered_map<int, int> track;

        for(int x : nums1) track[x]++;

        for(int x : nums2) {
            if(track[x]) {
                result.push_back(x);
                track[x]--;
            }
                
        }
        return result;
    }
};