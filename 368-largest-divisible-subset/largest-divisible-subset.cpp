class Solution {
private:
    // This function is used for dfs traversal
    void dfs(vector<pair<int, int>> &v, vector<int> &ans, int idx){
        // Checking for the base condition if the current element is the last one to get processed
        if(v[idx].first == idx){
            ans.push_back(idx);
            return;
        }
        // Else moving further and then pushing the index
        dfs(v, ans, v[idx].first);
        ans.push_back(idx);
    }
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        // Intuition
        // The idea in here is really very simple. We will follow the approach of finding the maximum consecutive sub sequence problem.
        // Sorting the nums
        sort(nums.begin(), nums.end());
        // Keeping a vector of pair int, int which will help to store the index and also the count of the number of elements
        vector<pair<int, int>> v;
        int sz = nums.size();
        // Pushing back index and then count
        int maxVal = 1;
        int index  = 0;
        for(int i = 0 ; i < sz ; i++) v.push_back({i, 1});
        for(int i = 0 ; i < sz ; i++){
            for(int j = i - 1 ; j >= 0 ; j--){
                if((nums[i] % nums[j]) == 0){
                    if((1 + v[j].second) > v[i].second){
                        v[i].first  = j;
                        v[i].second = 1 + v[j].second;
                    }
                }
            }
            if(v[i].second > maxVal) index = i;
            maxVal = max(maxVal, v[i].second);
        }
        vector<int> indices;
        vector<int> answer;
        dfs(v, indices, index);
        for(auto &ele : indices) answer.push_back(nums[ele]);
        return answer;
    }
};