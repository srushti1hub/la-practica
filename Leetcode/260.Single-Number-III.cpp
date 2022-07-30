class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        uint32_t xy = 0;
        vector<int> ans(2,0);
        for(int i=0; i<nums.size(); i++)
            xy ^= nums[i];
        uint32_t rs = xy&(~(xy-1));
        for(int i=0; i<nums.size(); i++){
            if((nums[i]&rs)) ans[0] ^= nums[i];
            else ans[1] ^= nums[i];
        }
        return ans;
    }
};
