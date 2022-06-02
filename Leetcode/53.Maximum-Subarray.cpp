class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cursum = 0, maxsum = INT_MIN;
        for (int i = 0; i < nums.size(); i++) 
        {
            if (nums[i] <= cursum + nums[i])
                cursum += nums[i];
            
            else 
              cursum = nums[i];
            
            if (cursum > maxsum)
                     maxsum = cursum;
        }
    return maxsum;
    }
};
