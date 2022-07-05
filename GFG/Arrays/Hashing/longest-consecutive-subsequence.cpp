// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
      //Your code here
      unordered_set<int> s;
      int len = 0;
      
      for(int i = 0; i<n; i++){
          s.insert(arr[i]);
      }
      
      for(int i = 0; i<n; i++){
          
          if(s.find(arr[i]-1) == s.end()){
              
              int num = arr[i];
              while(s.find(num)!=s.end())
                    num++;
              len = max(len,num-arr[i]);
          }
      }
      return len;
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends
