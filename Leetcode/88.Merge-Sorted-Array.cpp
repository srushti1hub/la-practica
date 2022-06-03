class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int j=n-1;j>=0;j--)
        {
            int i;
            for(i=m-1;(i>=0 && nums2[j]<nums1[i]);i--)
                nums1[i+1] = nums1[i];
            
            nums1[i+1] = nums2[j];
            m++;
        }
    }
};
