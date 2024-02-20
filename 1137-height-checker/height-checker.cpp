class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();
        vector<int> temp = heights;
        sort(heights.begin(), heights.end());
        int count=0;
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<n;++j,++i)
            {
                if(heights[i]!=temp[j])
                {
                    count = count + 1;
                }
            }
        }
        return count;
    }
};