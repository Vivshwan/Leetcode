class Solution {
public:
    int dfs(vector<vector<int>>& grid,int r , int c  ){
        if(r<0 || r>= grid.size() || c<.0 || c>= grid[0].size() || grid[r][c] ==0){
            return 0;
        }
        int currentGold = grid[r][c];
        grid[r][c] = 0;

        int maxGold = 0;

        maxGold = max(maxGold, dfs(grid, r + 1, c)); // Down
        maxGold = max(maxGold, dfs(grid, r - 1, c)); // Up
        maxGold = max(maxGold, dfs(grid, r, c + 1)); // Right
        maxGold = max(maxGold, dfs(grid, r, c - 1)); // Left

        grid[r][c] = currentGold;  //backtrack
        return currentGold + maxGold;
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int maxTotalGold = 0 ;


        for(int i = 0; i<m ; i++){
            for(int j =0 ;j< n ;j++){
                if(grid[i][j] != 0){
                    maxTotalGold = max(maxTotalGold , dfs(grid, i , j));
                }
            }
        }

        return maxTotalGold;
    }
};