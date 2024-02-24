class Solution {
public:
    typedef long long ll;

    // Function used to sort the array in the non-decreasing time stamp.
    static bool cmp(vector<int>& v1, vector<int>& v2) { return v1[2] < v2[2]; }
    vector<int> findAllPeople(int n, vector<vector<int>>& arr, int f) {
        //  Vector that holds whether a particular persons knows the secret or
        //  not. 1 -> Not known, 0 -> known.
        vector<int> parent(n, 1);

        sort(arr.begin(), arr.end(), cmp);

        // 0th and firstperson already knows the secret.
        parent[0] = 0;
        parent[f] = 0;

        for (int i = 0; i < arr.size(); i++) {
            ll j = i;

            // Used to build the graph.
            map<int, vector<int>> mp;

            queue<int> q;
            set<int> ss;

            //  Loop till the current time stamp.
            while (j < arr.size() && arr[i][2] == arr[j][2]) {
                int xx = parent[arr[j][0]];
                int yy = parent[arr[j][1]];
                if (xx == 0) {
                    if (ss.find(arr[j][0]) == ss.end()) {
                        q.push(arr[j][0]);
                        ss.insert(arr[j][0]);
                    }
                }
                if (yy == 0) {
                    if (ss.find(arr[j][1]) == ss.end()) {
                        q.push(arr[j][1]);
                        ss.insert(arr[j][1]);
                    }
                }
                mp[arr[j][0]].push_back(arr[j][1]);
                mp[arr[j][1]].push_back(arr[j][0]);
                j++;
            }

            // Check who knows the secret in the current time stamp.
            while (!q.empty()) {
                int p = q.front();
                q.pop();
                parent[p] = 0;
                for (auto x : mp[p]) {
                    if (ss.find(x) == ss.end()) {
                        ss.insert(x);
                        q.push(x);
                    }
                }
            }
            i = j - 1;
        }
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (parent[i] == 0)
                ans.push_back(i);
        }
        return ans;
    }
};