class Solution {
    private:
    void bfs(int row,int col,vector<vector<int>> &vis,vector<vector<char>> &grid){
        //using namespace std;
        vis[row][col]=1;
         int n=grid.size();
         int m=grid[0].size();
        queue<pair<int,int>> q;
        q.push({row,col});

        while(!q.empty())
        {
            int nrow=q.front().first;
            int ncol=q.front().second;
            q.pop();
             
                for(int i=-1;i<=1;i++){
                    for(int j=-1;j<=1;j++){
                        int row=nrow+i;
                        int col=ncol+j;
                        if(row>=0 && row<n && col>=0 && col<m && !vis[row][col] && grid[row][col]=='1' && (row==nrow || col==ncol) )
                        {
                            vis[row][col]=1;
                            q.push({row,col});
                        }
                    }
                }



    }
    }

public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        int ctr=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]=='1' )
                {
                    ctr++;
                    bfs(i,j,vis,grid);
                }
            }
        }
        return ctr;
    }
};