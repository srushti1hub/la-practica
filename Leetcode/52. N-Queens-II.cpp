class Solution {
public:
    int totalNQueens(int n) {
        vector<string> board(n);
        string s(n,'.');
        vector<int> leftRow(n,0), upperDiagonal(2*n-1,0), lowerDiagonal(2*n-1,0);
        int count = 0;
        
        for(int i=0;i<n;i++)
        {
            board[i] = s;
        }
        
        solve(0,board,leftRow,upperDiagonal,lowerDiagonal,n,count);
        return count;
    }
    
    void solve(int col, vector<string> &board,vector<int> &leftRow, vector<int> &upperDiagonal, vector<int> &lowerDiagonal,int n,int &count)
    {
        if(col == n)
        {
            count++;
            return;
        }
        
        for(int row=0 ; row<n ; row++)
        {
            if(!leftRow[row] && !upperDiagonal[row+col] && !lowerDiagonal[n-1+col-row])
            {
                board[row][col] = 'Q';
                leftRow[row] = 1;
                upperDiagonal[row+col] = 1;
                lowerDiagonal[n-1+col-row] = 1;
                solve(col+1,board,leftRow,upperDiagonal,lowerDiagonal,n,count);
                board[row][col] = '.';
                leftRow[row] = 0;
                upperDiagonal[row+col] = 0;
                lowerDiagonal[n-1+col-row] = 0;
            }
        }
        
    }
};
