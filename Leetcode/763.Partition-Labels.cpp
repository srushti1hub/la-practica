class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int> M;
        for(int i=0; i<s.length(); i++)
            M[s[i]] = i;
        vector<int> ans;
        int end = 0,start = -1;
        for(int i=0; i<s.length(); i++){
            end = max(end,M[s[i]]);
            if(end == i){
                ans.push_back(end-start);
                start = end;
            }
        }
        return ans;
    }
};
