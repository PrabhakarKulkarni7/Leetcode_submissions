class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int> answer;
        unordered_map<int,int> map1;
        unordered_map<int,int> map2;
        for(int i=0;i<n;i++){
            map1[nums1[i]]++;
        }
        for(int i=0;i<m;i++){
            map2[nums2[i]]++;
        }
        for(auto& pair1 : map1){
            for(auto& pair2 : map2){
                if(pair1.first==pair2.first){
                    answer.push_back(pair1.first);
                }
            }
        } return answer;
    }
};