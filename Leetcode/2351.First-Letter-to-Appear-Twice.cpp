class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map <char,int> Map;
        for(int i=0; i<s.size(); i++){
            Map[s[i]]++;
            if(Map[s[i]] == 2) return s[i];
        }
        return '-1';
    }
};
