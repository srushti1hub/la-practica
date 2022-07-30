class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
            int len = nums.size(),i;
		    unsigned int psize = pow(2,len);
		    vector <vector<int>> ans;
		    
		    for(i=0; i<psize; i++){
		        vector<int> temp;
                for(int j=0; j<len; j++){
                    if(i & (1<<j))  temp.push_back(nums[j]);
		        }
                sort(temp.begin(),temp.end());
                if(find(ans.begin(),ans.end(),temp) == ans.end()) ans.push_back(temp);        
		    }
    
		    return ans;
    }
};
