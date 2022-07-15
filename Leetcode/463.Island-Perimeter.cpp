class Solution {
public:
    bool dfs(vector<vector<int>>& grid, int i, int j, int& count) {
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size()) return false;
        
        if(grid[i][j]==0) return false;
        if(grid[i][j]==2) return true;
        
        grid[i][j]=2;
        
        if(!dfs(grid, i-1, j, count)) count++;
        if(!dfs(grid, i+1, j, count)) count++;
        if(!dfs(grid, i, j-1, count)) count++;
        if(!dfs(grid, i, j+1, count)) count++;
        
        return true;
    }
    
    int islandPerimeter(vector<vector<int>>& grid) {
        int m=grid.size(), n=grid[0].size();
        int count=0;
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(grid[i][j]==1) {
                    bool b = dfs(grid, i, j, count);
                    return count;
                }
            }
        }
        return count;
    }
};
