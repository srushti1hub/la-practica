class Solution {
public:
    int triangularSum(vector<int>& nums) {
        
        for(int i = nums.size(); i > 1; i--) 
        {
            for(int j = 1; j < i; j++) 
                nums[j-1] = (nums[j] + nums[j-1]) % 10;
        }
        
        return nums[0];
    }
};
