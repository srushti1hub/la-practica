class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int> Map;
        int a,b = 0;
        for(auto i: nums){
            if(Map[i]++) a = i;
            b ^= i;
        }
        for(int i=1; i<=nums.size(); i++){
            if(i == a) continue;
            b ^= i;
        }
        return {a,b};
    }
};
