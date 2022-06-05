class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int n = rowIndex+1;
        vector<vector<int>> ans(n);
        
        for(int i = 0; i<n ; i++)
            ans[i].resize(i+1,1);
        
        for(int i = 2; i<n ; i++)
        {
            for(int j = 1; j<i ; j++)
            {
                ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
            }
        }
        
        return ans[rowIndex];
    }
};
