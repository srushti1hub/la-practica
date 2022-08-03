class Solution {
public:
    int longestPalindrome(string s) {
        int ans = 0;
        bool odd = false;
        unordered_map <char,int> Map;
        for(int i=0; i<s.length(); i++)
            Map[s[i]]++;
        for(auto i : Map){
            if(i.second%2){
                odd = true;
                ans += i.second - 1;
            }
            else ans += i.second;           
        }
        if(odd) ans++;
        return ans;
    }
};
