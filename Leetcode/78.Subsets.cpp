class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
            int len = nums.size(),i;
		    unsigned int psize = pow(2,len);
		    vector <vector<int>> ans;
		    
		    for(i=0; i<psize; i++)
		    {
		        vector<int> temp;
		        
		        for(int j=0; j<len; j++)
		        {
		            if(i & (1<<j))
		               temp.push_back(nums[j]);
		        }
		        ans.push_back(temp);
		    }
		    return ans;
    }
};
