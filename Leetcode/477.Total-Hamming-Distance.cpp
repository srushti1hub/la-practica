class Solution {
public:
    
    int totalHammingDistance(vector<int>& nums) {
        int sum=0;
        for(int i=0; i<32; i++){ 
            int one=0,zero =0;  
            for(int &num: nums){
                if(num&1) one++;
                else zero++;
                num >>= 1;   
            }
            sum += (one*zero);
        }
        return sum;
    }
};
