class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(),i,j;
        for(i=n-2; i>=0; i--){
            if(nums[i]<nums[i+1])
                break;
        }
        if(i<0) sort(nums.begin(),nums.end());
        else{
            for(j=n-1; j>=0; j--){
                if(nums[i]<nums[j])
                    break;
            }
            swap(nums[i], nums[j]);
            reverse(nums.begin()+i+1, nums.end());
        }
    }
};
