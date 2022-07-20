class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map <char,int> Map;
        for(int i=0; i<magazine.length(); i++)
            Map[magazine[i]]++;
        for(int i=0; i<ransomNote.length(); i++){
            if(--Map[ransomNote[i]] < 0){
                return false;
            }
        }
        return true;
    }
};
