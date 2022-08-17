class Solution {
    vector<string> vec = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..",
                              "--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-",
                              "-.--","--.."};
public:
    string helper(string s){
        string encode = "";
        for(int i=0; i<s.length(); i++){
            encode += vec[s[i] - 'a'];
        }
        return encode;
    }
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_set<string> S;
        for(auto i : words){
            string encode = helper(i);
            S.insert(encode);
        }
        return S.size();
    }
};
