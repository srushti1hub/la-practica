class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        
        int left = 0, right = 0;
        unordered_map<char, int > freq;
        int maxfreqTillNow = 0, ans = 0;
        while(right < n){
            ++freq[s[right]];
            maxfreqTillNow = max(maxfreqTillNow, freq[s[right]]);
            
            int leftelements = (right - left + 1) - maxfreqTillNow;
            while(leftelements > k){
                --freq[s[left]];
                ++left;
                leftelements = (right - left + 1) - maxfreqTillNow;
            }
            
            ans = max(ans, right - left + 1);
            ++right;
        }
        
        return ans;
    }
};
