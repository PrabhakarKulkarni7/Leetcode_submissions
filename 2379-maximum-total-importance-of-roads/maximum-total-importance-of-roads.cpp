class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {

        vector<int> degree(n,0);

        for(auto &road: roads){

            int u = road[0];
            int v = road[1];

            degree[u]++;
            degree[v]++;
            
        }

        sort(degree.begin(),degree.end());

        long long result = 0;

        for(long long i=1;i<=n;i++){

            result += degree[i-1] * i;
            
        }

        return result;
        
        
    }
};