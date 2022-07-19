class Solution {
public:
    void get_rev(string &s, int start, int end){    
        while(start<end){
            swap(s[start],s[end]);
            start++;
            end--;
        }
    }
    
    string reverseWords(string s) {
        int j = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i] == ' '){
                get_rev(s,j,i-1);
                j = i+1;
            }
        }
        get_rev(s,j,s.length()-1);
        return s;
    }
};
