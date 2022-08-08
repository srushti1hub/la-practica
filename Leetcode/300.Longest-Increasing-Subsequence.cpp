class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        vector<int> vec(n,1);
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(nums[j]>nums[i])
                    vec[j] = max(vec[j],vec[i]+1);
            }
        }
        for(auto i : vec){
            ans = max(ans,i);
        }
        return ans;
    }
};
