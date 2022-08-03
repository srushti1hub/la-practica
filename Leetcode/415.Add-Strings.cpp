class Solution {
public:
    string addStrings(string num1, string num2) {
      reverse(num1.begin(),num1.end());
      reverse(num2.begin(),num2.end());
      int i=0;
      int j=0;
      int carry=0;
      string ans;
      while(i<num1.length()||j<num2.length()||carry)
      {
        int sum=0;
        if(i<num1.length())
        sum+=(num1[i]-'0');
        if(j<num2.length())
        sum+=(num2[j]-'0');
        sum+=carry;
        carry=sum/10;
        int d=sum%10;
        ans.push_back(d+'0');
        i++;
        j++;
      }
      reverse(ans.begin(),ans.end());
      return ans;
    }
};
