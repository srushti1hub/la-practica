class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map <int,int> Map;
        for(int i=0;i<nums.size();i++)
            Map[nums[i]]++;
        for(auto i: Map){
            if(i.second == 1)
                return i.first;
        }
        return -1;
    }
};
