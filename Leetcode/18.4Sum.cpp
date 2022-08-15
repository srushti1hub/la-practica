class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int low,high,n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                low = j+1;
                high = n-1;
                    while(low<high){
                        long int sum = (long int) nums[i] + nums[j] + nums[low] + nums[high];
                        if(sum == target){
                            vector<int> temp {nums[i],nums[j],nums[low],nums[high]};
                            ans.push_back(temp);
                            while(low<high && nums[low] == nums[low+1]) low++;
                            while(low<high && nums[high] == nums[high-1]) high--;
                            low++;
                            high--;
                        }
                        else if(sum > target) high--;
                        else low++;
                    }
                while(j + 1 < n && nums[j + 1] == nums[j]) ++j;
            }
            while(i + 1 < n && nums[i + 1] == nums[i]) ++i;
        }
        return ans;
    }
};
