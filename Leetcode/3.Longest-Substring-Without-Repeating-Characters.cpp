class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> vec(300,-1);
        int pos = -1, ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            int ch = s[i];
            pos = max(pos, vec[ch]);   
            ans = max(ans, i - pos);
            vec[ch] = i;
        }

        return ans;
    }
};
