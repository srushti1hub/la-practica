class Solution {
public:
    bool judgeSquareSum(int c) {
        int i = 0;
        int j = sqrt(c);
        long long curr;
        while(i<=j){
            curr = (long long)i*i+(long long)j*j;
            if(curr == c) return true;
            else if(curr>c) j--;
            else i++;
        }
        return false;
    }
};
