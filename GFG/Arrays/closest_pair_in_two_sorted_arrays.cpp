// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function teamplate for C++

class Solution{
  public:
    vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {
        //code here
        vector<int> ans;
        int diff = INT_MAX,ptr1 = 0, ptr2 = m-1, a,b;
        while(ptr1<n && ptr2>=0)
        {
            if(abs(arr[ptr1]+brr[ptr2] - x) < diff)
            {
                a = arr[ptr1];
                b = brr[ptr2];
                diff = abs(arr[ptr1]+brr[ptr2] - x);
            }
            
            if(arr[ptr1]+brr[ptr2] > x)
            ptr2--;
              
            else
            ptr1++; 
        }
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	int m,n,x;
	while(t--)
    {
        cin>>n>>m;
        int a[n],b[m];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
            
        for(int i=0;i<m;i++)
            cin>>b[i];
            
        cin>>x;
        
        vector<int> ans;
        Solution ob;
        ans = ob.printClosest(a, b, n, m, x);
        cout << abs(ans[0] + ans[1] - x) << endl;
        
    }
    return 0;
}
  // } Driver Code Ends
