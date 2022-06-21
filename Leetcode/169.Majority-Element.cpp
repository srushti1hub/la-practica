class Solution {
public:
    int majorityElement(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        unordered_map<int,int> Map;
        int majority;
        
        for(int i=0;i<nums.size();i++)
            Map[nums[i]]++;
        
        for(auto i : Map)
        {
            if(i.second>nums.size()/2)
                 majority = i.first;
        }
        return majority;
    }
};
