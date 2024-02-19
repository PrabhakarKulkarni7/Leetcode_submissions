class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        int n = mountain.size();
        vector<int>temp;
        for(int i=1;i<n-1;i++)
        {
            if(mountain[i]>mountain[i + 1] && mountain[i]>mountain[i - 1])
            {
                temp.push_back(i);
            }
        }
        return temp;
    }
};