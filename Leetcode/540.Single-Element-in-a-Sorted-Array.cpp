class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int high = nums.size() - 1,low = 0,mid;
        
        //Boundary Checks
        if(high==0)
            return nums[0];
        
        if(nums[0]!=nums[1])
            return nums[0];
        
        if(nums[high]!=nums[high-1])
            return nums[high];
        
        
        while(low<=high)
        {
            mid = low+high >>1;
            
            //Unique index property
            if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1])
                return nums[mid];
            
            //Pair index property and partitioning property
            if((mid%2==0 && nums[mid]==nums[mid+1])||(mid%2==1 && nums[mid]==nums[mid-1]))
                low = mid+1;
            
            else
                high = mid-1;
        }
        
        return -1;
        
    }
};
