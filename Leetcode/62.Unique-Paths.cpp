class Solution {
public:
    int uniquePaths(int m, int n) {
        int dir = m+n-2;
        int r = m - 1;
        double ans = 1;
        for(int i=1; i<=r; i++){
            ans = ans* (dir-r+i)/i;
        }
        return (int)ans;
    }
};
