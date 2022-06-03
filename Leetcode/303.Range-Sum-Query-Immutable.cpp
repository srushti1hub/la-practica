class NumArray {
public:
    vector<int> vec;
    NumArray(vector<int>& nums) {
        int n = nums.size();
        vec = vector<int>(n+1);
        for(int i=1;i<=n;i++)
        {
            vec[i] = nums[i-1] + vec[i-1];
        }
    }
    
    int sumRange(int left, int right) {
        return vec[right+1]-vec[left];
    }
};
