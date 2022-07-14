class Solution {
public:
    int minPartitions(string n) {
        int ans = n[0];
        for(int i=1; i<n.length(); i++){
            if(ans<n[i]) ans = n[i];
        }
        return ans - '0';    
    }
};
