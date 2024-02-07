class Solution {
public:
    int searchInsert(vector<int>& v, int target) {
        
        int low = 0 , high = v.size()-1;
        int ans = v.size();
        while(low<=high)
        {
            int mid = (low + high) / 2;
            if(v[mid]>=target)
            {
                ans = mid;
                high = mid - 1;
            }
            else
            low = mid + 1;
        }
        return ans;
        
    }
};