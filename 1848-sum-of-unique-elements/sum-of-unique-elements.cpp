class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n = nums.size(); // size of the vector
         map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            // Transfering the array elements to map
            mp[nums[i]]++;      
        }

        int sum = 0;
        // Check the count of elements, if the count = 1 then it means the ele is unique. Therefore add the ele to sum.
        for(auto it: mp){
            if(it.second==1)
            {
                sum = sum + it.first;
            }
        }
        return sum;
    }
};