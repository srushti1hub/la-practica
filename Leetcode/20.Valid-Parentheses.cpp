class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<char> Stack;
        
        for(int i=0; i<n; i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                Stack.push(s[i]);
            }
            
            else if(!Stack.empty()){
                if(s[i] == ')' && Stack.top() == '(')
                    Stack.pop();
                else if(s[i] == '}' && Stack.top() == '{')
                    Stack.pop();
                else if(s[i] == ']' && Stack.top() == '[')
                    Stack.pop();
                else 
                    return false;
            }
            else 
                return false;
        }
        if(!Stack.empty()) return false;
        return true;
    }
};
