class Solution {
public:
    int helper(int n){
        int sum = n+1,cnt = 2;
        for(int i = 2; i*i<=n; i++){
            if(n%i == 0) {
                sum += i; 
                cnt++;
                if(i != n/i) {
                    sum += (n/i); 
                    cnt++;
              }
            } 
            if(cnt > 4) return 0;
        }
        if(cnt == 4) return sum;
        return 0;
    }
    int sumFourDivisors(vector<int>& nums) {
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum += helper(nums[i]);
        }
        return sum;
    }
};
