class Solution {
public:
    void helper(vector<vector<int>>& matrix,int i,int j){
        for(int k=0; k<matrix.size(); k++)
            matrix[k][j] = 0;
        for(int k=0; k<matrix[0].size(); k++)
            matrix[i][k] = 0;
    }
    
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> vec;
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                if(!matrix[i][j]) vec.push_back({i,j});
            }
        }
        for(int i=0; i<vec.size(); i++){
            helper(matrix,vec[i].first,vec[i].second);
        }
    }
};
