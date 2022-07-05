class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        unordered_set<int> s(nums.begin(),nums.end());
        int len = 0;
        
        for(int i=0;i<nums.size(); i++){
            if(s.find(nums[i]-1) == s.end())
            {
                int num = nums[i];
                while(s.find(num) != s.end())
                    num++;
                len = max(len,num-nums[i]);
            }
        }
        return len;
    }
};
