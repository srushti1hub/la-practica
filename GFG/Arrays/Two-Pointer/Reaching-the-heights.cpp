// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


vector<int> reaching_height(int n, int a[]) ;

int main() {
	int t;
	cin >> t;
	while (t-- > 0) {
	    int n; 
	    cin >> n;
	    int a[n];
	    for (int i = 0; i < n; i++) 
	        cin >> a[i];
	    vector<int> v;
	    v = reaching_height(n,a);
	
	    if(v.size()==1 and v[0] == -1){
	        cout << "Not Possible\n";
	    }
	    else{
	    for(int i:v)
	        cout << i << " ";
	    cout << endl;}
	    
	}
	return 0;
}// } Driver Code Ends


//User function Template for C++

vector<int> reaching_height(int n, int arr[]) {
    // Complete the function
    std::sort(arr,arr+n);
    vector<int> ans;
    int start = 0, end = n-1;
    int sum = 0;
    while(start<end){
        ans.push_back(arr[end]);
        sum += arr[end];
        ans.push_back(arr[start]);
        sum -= arr[start];
        end--;
        start++;
    }
    if(n%2 != 0){
        ans.push_back(arr[start]);
        sum += arr[start];
    }
    if(!sum){
        ans.clear();
        ans.push_back(-1);
    }
    return ans;
}

