class Solution {
public:
    long long unsigned int sum(long long unsigned int n){
        return (n*(n+1))/2;
    }
    
    int arrangeCoins(int n) {
        int low = 1,high = n,ans = -1;
        while(low<=high){
            int mid = low +(high-low)/2;
            if(n-mid >= sum(mid-1)) {
                ans = mid;
                low = mid+1;
            }
            else high = mid-1;
        }
        return ans;
    }
};
