class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> boardrow(n);
        string s(n,'.');
        
        for(int i=0;i<n;i++)
            boardrow[i] = s;
        
        solve(0,boardrow,ans,n);
        return ans;
    }
    
    void solve(int col,vector<string> &boardrow,vector<vector<string>> &ans,int n)
    {
        if(col == n)
        {
            ans.push_back(boardrow);
            return;
        }
        
        for(int row=0;row<n;row++)
        {
            if(isSafe(row,col,boardrow,n))
            {
                boardrow[row][col] = 'Q';
                solve(col+1,boardrow,ans,n);
                boardrow[row][col] = '.';
            }
        }
    }
    
    bool isSafe(int row,int col,vector<string>boardrow,int n)
    {
        int r = row,c = col;
        
        // Diagonal Check 
        while(r>=0 && c>=0)
        {
            if(boardrow[r][c]=='Q')
                return false;
            r--;
            c--;
        }
        
        r = row;
        c = col;
    
        // Diagonal Check
        while(r<n && c>=0)
        {
            if(boardrow[r][c] == 'Q')
                return false;
            r++;
            c--;
        }
        
        r = row;
        c = col;
        
        // Column Check
        while(c>=0)
        {
            if(boardrow[r][c] == 'Q')
                return false;
            
            c--;
        }
        return true;
    }
    
};
