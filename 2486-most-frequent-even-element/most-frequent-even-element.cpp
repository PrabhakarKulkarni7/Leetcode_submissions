class Solution {
public:
    int mostFrequentEven(vector<int>& a) {
        map<int,int>map1;
        for(int i:a){
            if(i%2==0){
                map1[i]++;
            }
        }
        int ans=-1,fre1=INT_MIN;
        for(auto i:map1){
            if(i.second>fre1){
                fre1=i.second;
                ans=i.first;
            }
        }
        return ans;
    }
};