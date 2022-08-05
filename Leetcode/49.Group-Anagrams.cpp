class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string,vector<string>> Map;
        vector<vector<string>> ans;
        for(int i=0; i<strs.size(); i++){
            string temp = strs[i];
            sort(temp.begin(),temp.end());
            Map[temp].push_back(strs[i]);
        }
        for(auto i : Map){
            ans.push_back(i.second);
        }
        return ans;
    }
};
