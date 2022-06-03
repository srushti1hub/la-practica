class NumMatrix {
public:
    vector<vector<int>> M;
    NumMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size(),m = matrix[0].size();
        M = vector<vector<int>> (n+1,vector<int>(m+1,0));
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                M[i][j] = matrix[i-1][j-1] + M[i-1][j] + M[i][j-1] - M[i-1][j-1];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return M[row2+1][col2+1] - M[row1][col2 + 1] - M[row2 + 1][col1] + M[row1][col1];
    }
};
