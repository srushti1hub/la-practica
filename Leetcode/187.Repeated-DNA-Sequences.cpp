class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
       vector<string> ans;
       int n = s.size();
       if(n < 10) return ans;
       unordered_map <string,int> Map;
       for(int i = 0; i<n; i++){
           string str = s.substr(i,10);
           Map[str]++;
       }
        for(auto i: Map){
            if(i.second>1) ans.push_back(i.first);
        }
        return ans;
    }
};

