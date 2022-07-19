class Solution {
public:
    bool check(vector<vector<char>>& board, int row, int col){
    for(int i=0; i<9; i++){
        if(i != row and board[i][col] == board[row][col]) return false;
        if(i != col and board[row][i] == board[row][col]) return false;
        
        if(row != 3*(row/3)+i/3 and col != 3*(col/3) + i%3 and board[3*(row/3)+i/3][3*(col/3) + i%3] == board[row][col]) 
           return false;
    
    }
    return true;
}
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0; i<9; i++){  
            for(int j=0; j<9; j++){
                if(board[i][j] != '.'){
                    if(check(board,i,j) == false) return false;
                }
            }
        }
        return true;
    }
};
