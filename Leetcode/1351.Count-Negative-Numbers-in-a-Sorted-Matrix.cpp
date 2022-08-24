class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        int last = grid[0].size()-1;
        int j = 0;
        for(int i=0;i<grid.size();i++)
        {
            
            for(j=last;j>=0;j--)
            {
                
                if(grid[i][j]>=0)
                {
                    break;
                }
                
            }
            last = j;
            if(j>=0)
                count += (grid[0].size()-j-1);
            else
                count += grid[0].size();
        }
        return count;
    }
};
