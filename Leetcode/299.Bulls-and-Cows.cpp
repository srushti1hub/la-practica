class Solution {
public:
    string getHint(string secret, string guess) {
        unordered_map<char,int>map;
        int n=secret.size();
        int bulls=0, cows=0;
        for(int i=0; i<n; i++){
            if(secret[i]==guess[i]){
                bulls++;
            }
            else{
                if(map[guess[i]]-->0) cows++;
                if(map[secret[i]]++<0) cows++;
            }   
        }
        
        return to_string(bulls)+"A"+to_string(cows)+"B";
    }
};
