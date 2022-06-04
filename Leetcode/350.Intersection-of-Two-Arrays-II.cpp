class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0,j=0;
        
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]==nums2[j])
            {
                j++;
                i++;
            }
            
            else if(nums1[i] < nums2[j])
            {
                nums1.erase(nums1.begin()+i);
            }
            
            else
                nums2.erase(nums2.begin()+j);
            
        }
        
        if(nums2.size()<nums1.size()) 
            return nums2;
        
        return nums1;
    }
};
