class Solution {
public:
    string reverseStr(string s, int k) {
        string ans;
        int len=s.length(),j=1;
        string temp;
        for(int i=0;i<len;i+=k)
        {
            if(j%2!=0)
            {
                temp=s.substr(i,k);
                reverse(temp.begin(),temp.end());
                ans+=temp;  
            }
            else
            {
                temp=s.substr(i,k);
                 ans+=temp;   
            }
            j++;
        }
        return ans;
    }
};
