class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> m1;  
        unordered_map<string, char> m2;  
        int i=0;
        stringstream str(s);
        string temp;
        
        while(getline(str,temp,' ')){
            if(m1.count(pattern[i])==0 && m2.count(temp)==0){  
                m1[pattern[i]] = temp;
                m2[temp] = pattern[i];
            }else{
			
                if(m1[pattern[i]]!=temp || m2[temp]!=pattern[i]) return false;  
            }
            i++;
        }
        if(i<pattern.size()) return false; 
        return true;    
    }
};
