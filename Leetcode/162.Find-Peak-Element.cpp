class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int low = 0,high = nums.size()-1,mid;
        while(low<=high)
        {
            mid = (low+high) >> 1;
            
            if((mid == 0 || nums[mid-1] <= nums[mid]) &&(mid == nums.size()-1 || nums[mid+1]<=nums[mid]))
                break;
            if(mid>0 && nums[mid-1]>nums[mid])
                high = mid-1;
            else
                low = mid+1;
        }
        return mid;
    }
};
