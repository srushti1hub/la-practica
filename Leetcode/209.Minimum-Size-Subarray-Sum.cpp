class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size(),left = 0,right = 0,sum = 0,ans = INT_MAX;
        while(right<n){
            sum += nums[right];
            if(sum>=target){
                while(sum>=target){
                    sum -= nums[left];
                    left++;
                }
                ans = min(ans,right-left+2);
            }
            right++;
        }
        return ans == INT_MAX ? 0 : ans;
    }
};
