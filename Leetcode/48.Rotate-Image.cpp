class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> M(n,vector<int>(n));
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                M[i][j] = matrix[j][i];
            }
        }
        for(int i=0; i<n; i++){
            reverse(M[i].begin(),M[i].end());
        }
        matrix = M;
    }
};
