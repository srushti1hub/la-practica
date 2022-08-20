//{ Driver Code Starts
//Initial Template for C++


// CPP program to generate power set
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

void helper(string s,vector<string> &ans,int i,string str = "")
{
    if(i == s.length()){
        ans.push_back(str);
        return;
    }
    helper(s,ans,i+1,str);
    helper(s,ans,i+1,str+s[i]);
}
//Function to return the lexicographically sorted power-set of the string.
vector <string> powerSet(string s)
{
   //Your code here
   vector<string> ans;
   helper(s,ans,0);
   sort(ans.begin(),ans.end());
   return ans;
}


//{ Driver Code Starts.


// Driver code
int main()
{
    int T;
    cin>>T;//testcases
    while(T--)
    {
        string s;
        cin>>s;//input string
        
        //calling powerSet() function
        vector<string> ans = powerSet(s);
        
        //sorting the result of the powerSet() function
        sort(ans.begin(),ans.end());
        
        //printing the result
        for(auto x:ans)
        cout<<x<<" ";
        cout<<endl;
        
        
    }

return 0;
} 
// } Driver Code Ends
