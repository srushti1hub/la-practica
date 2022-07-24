class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        if(grid.size() == 0) return 0;
        int n = grid.size()-1,m = grid[0].size()-1,total = 0,count = 0,minutes = 0;
        queue<pair<int,int>> q;
        for(int i=0; i<=n; i++){
            for(int j=0; j<=m; j++){
                if(grid[i][j]) total++;
                if(grid[i][j] == 2) q.push({i,j});
            }
        }
        int dx[4] = {0,0,1,-1},dy[4] = {1,-1,0,0};
        while(!q.empty()){
            int i = q.size();
            count += i;
            while(i--){
                int x = q.front().first,y = q.front().second;
                q.pop();
                for(int j=0; j<4; j++){
                    int nx = x+dx[j], ny = y+dy[j];
                    if(nx<0 || ny<0 || nx>n || ny>m || grid[nx][ny] != 1) continue;
                    grid[nx][ny] = 2;
                    q.push({nx,ny});
                }
            }
            if(!q.empty()) minutes++;
        }
        return total == count ? minutes : -1;
    }
};
