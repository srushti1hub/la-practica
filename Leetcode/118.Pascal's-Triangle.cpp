class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows);
        
        for(int i = 0; i < numRows;i++)
            ans[i].resize(i+1,1);
        
        for(int row = 0; row<numRows ; row++)
        {
            for(int i=1;i < row ; i++)
            {
                    ans[row][i] = ans[row-1][i-1] + ans[row-1][i];
            }
        }
        
        return ans;
    }
};
