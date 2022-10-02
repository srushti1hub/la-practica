class Solution {
public:
    int m=1e9+7;
    int numRollsToTarget(int d, int f, int t) {
        vector<vector<int> > dp(d+1, vector<int>(t+1, 0));
        dp[0][0]=1;
        for(int i=1; i<=d; i++){
            for(int j=1; j<=t; j++){
                for(int k=1; k<=f; k++){
                    if(k<=j) dp[i][j]=((dp[i][j]%m)+(dp[i-1][j-k]%m))%m;
                }
            }
        }
        return dp[d][t];
    }
};
