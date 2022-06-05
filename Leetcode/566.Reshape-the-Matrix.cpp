class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int row = mat.size();
        int col = mat[0].size();
        vector<vector<int>> ans(r,vector<int> (c));
        
        if(r*c != row*col)
            return mat;
        
        else
        {
            for(int i=0;i<c*r;i++)
               ans[i/c][i%c]=mat[i/col][i%col];
            
            return ans;
        }
    }
};
