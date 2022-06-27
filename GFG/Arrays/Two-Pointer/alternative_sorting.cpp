// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{


	public:
	vector<int> alternateSort(int arr[], int n)
	{
	    // Your code goes here
	    vector<int> ans;
	    std::sort(arr,arr+n);
	    int start = 0, end = n-1;
	    while(start<end)
	    {
	        ans.push_back(arr[end]);
	        ans.push_back(arr[start]);
	        start++;
	        end--;
	    }
	    if(n%2){
	        ans.push_back(arr[start]);
	    }
	    return ans;
	}

};
	

// { Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
       	
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
       

        Solution ob;
        vector<int> ans = ob.alternateSort(a, n);
        for(auto i:ans)
        	cout << i << " ";
	    cout << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends
