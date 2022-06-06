lass Solution {
public:
    
    int kadaneAlgo(vector<int>& nums)
    {
        int max_sum = INT_MIN,curr_sum = 0;
        for(int i = 0; i<nums.size(); i++)
        {
            curr_sum = max(nums[i],curr_sum+nums[i]);
            max_sum = max(max_sum,curr_sum);
        }
        return max_sum;
    }
    
    int maxSubarraySumCircular(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int noWrap = kadaneAlgo(nums);
        int Wrap,totalSum = 0;
        
        for(int i = 0; i<nums.size(); i++)
        {
            totalSum += nums[i];
            nums[i] *= -1;
        }
        
        Wrap = totalSum + kadaneAlgo(nums);
        
        if(max(Wrap,noWrap))
            return max(Wrap,noWrap);
        
        else{
            std::sort(nums.begin(),nums.end());
            return -1*nums[0];
        }
    }
};
