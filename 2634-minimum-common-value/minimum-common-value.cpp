#include <vector>
#include <unordered_map>
#include <algorithm> // for min function
using namespace std;

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp1;
        unordered_map<int,int> mp2;

        for(int i = 0; i < nums1.size(); i++) {
            mp1[nums1[i]]++;
        }

        for(int i = 0; i < nums2.size(); i++) {
            mp2[nums2[i]]++;
        }
        
        int mini = -1; // Initialize mini with -1 to indicate no common element found
        for(auto it : mp2) {
            if(mp1.find(it.first) != mp1.end()) {
                mini = (mini == -1) ? it.first : min(mini, it.first); // Update mini if a common element is found
            }
        }
        return mini;
    }
};
