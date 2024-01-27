class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int n = a.size();
        int i = 0;
        for(int j = 1 ; j<n ; j++)
        {
            if(a[j] != a[i])
            {
                a[i + 1] = a[j];
                i++;
            }
        }
        return i + 1;
    }
};