class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2);
        ans[0] = solve1(nums,target);
        ans[1] = solve2(nums,target);
        return ans;
    }
    int solve1(vector<int>& nums, int target){
        int start = 0,end = nums.size()-1,i = -1;
        while(start<=end){
            int mid = start + end-start/2;
            if(nums[mid] == target){
                i = mid;
                end = mid-1;
            }
            else if(nums[mid]>target) end = mid-1;
            else start = mid+1;
        }
        return i;
    }
    int solve2(vector<int>& nums, int target){
        int start = 0,end = nums.size()-1,i = -1;
        while(start<=end){
            int mid = start + end-start/2;
            if(nums[mid] == target){
                i = mid;
                start = mid+1;
            }
            else if(nums[mid]>target) end = mid-1;
            else start = mid+1;
        }
        return i;
    }
};
