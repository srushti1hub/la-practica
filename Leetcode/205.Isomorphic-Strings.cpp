class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()) 
            return false;
    
        unordered_map <char,char> Map1,Map2;
        for(int i=0; i<s.length(); i++){
            if(Map1.find(s[i]) != Map1.end() && Map1[s[i]] != t[i])
                return false;
            if(Map2.find(t[i]) != Map2.end() && Map2[t[i]] != s[i])
                return false;
            else{
                Map1[s[i]] = t[i];
                Map2[t[i]] = s[i];
            }
            
        }
        return true;
    }
};
