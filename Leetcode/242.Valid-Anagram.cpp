class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char,int> Map;
        for(int i=0; i<s.length(); i++)
            Map[s[i]]++;
        for(int i=0; i<t.length(); i++)
            Map[t[i]]--;
        for(auto i : Map){
            if(i.second ) return false;
        }        
        return true;
    }
};
