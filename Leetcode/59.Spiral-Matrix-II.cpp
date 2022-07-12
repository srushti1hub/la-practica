lass Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n , vector<int> (n));
        int startRow = 0, endRow = n-1, startCol = 0, endCol = n-1, j = 1;;
        while(startRow<=endRow && startCol<=endCol){
            for(int i=startCol; i<=endCol; i++){
                ans[startRow][i] = j;
                j++;
            }
            startRow++;
            
            for(int i=startRow; i<=endRow; i++){
                ans[i][endCol] = j;
                j++;
            }
            endCol--;
            
            if(startRow<=endRow){
                for(int i=endCol; i>=startCol; i--){
                ans[endRow][i] = j;
                j++;
               }
            endRow--;
            }
            
            if(startCol<=endCol){
                for(int i=endRow; i>=startRow; i--){
                ans[i][startCol] = j;
                j++;
              }
            startCol++;
            }
        }
        return ans;
    }
};
