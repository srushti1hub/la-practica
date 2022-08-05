lass Solution {
public:
    vector<int> dp;
    Solution(){
        dp.resize(1001);
        fill(dp.begin(), dp.end(), -1);
    }
    int combinationSum4(vector<int>& nums, int target, int currsum = 0) {
        if(currsum > target) return 0;
        if(currsum == target) return 1;
        if(dp[currsum] != -1) return dp[currsum];
        int k = 0;
        for(int i=0; i<nums.size(); i++) {
            if(currsum + nums[i] <= target)
                k += combinationSum4(nums, target, currsum + nums[i]);
        }
        return dp[currsum] = k;      
    }
};
