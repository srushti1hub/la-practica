// { Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    int subArraySum(int arr[], int n, int sum)
    {
    	//code here.
    	unordered_map <int,int> Map;
    	int currsum = 0,count = 0;
    	for(int i=0;i<n;i++)
    	{
    	    currsum += arr[i];
    	    if(currsum == sum)
    	    {
    	        count++;
    	    }
    	    
    	    if(Map.find(currsum-sum)!=Map.end())
    	    {
    	        count += Map[currsum-sum];
    	    }
    	    
    	    Map[currsum]++;
    	}
    	return count;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,sum=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>sum;
	    Solution ob;
	    cout<<ob.subArraySum(arr, n, sum);
	    cout<<'\n';
	}
	return 0;
}  // } Driver Code Ends
