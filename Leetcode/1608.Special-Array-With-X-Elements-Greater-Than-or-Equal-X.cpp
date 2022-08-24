class Solution {
public:
    int specialArray(vector<int>& nums) {
        int a=-1, b=1001, n=nums.size();
        while(a<b){
            int mid=b+(a-b)/2, count=0;
            for(int i=0; i<n; i++)
                count+=nums[i]>=mid;
            if(count>=mid) a=mid;
            else b=mid-1;
        }
        int count=0;
        for(int i=0; i<n; i++)
            count+=nums[i]>=a;
        return count==a?a:-1;
    }
};
