// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        // code here
        double D = ((b*b) - (4*a*c));
        if(D < 0) return {-1};
        else if(D == 0) {
            int root = floor((-b + sqrt(D))/(2*a));
            return {root,root};
        }
        else{
            int r1 = floor((-b + sqrt(D))/(2*a));
            int r2 = floor((-b - sqrt(D))/(2*a));
            if(r2>r1) return {r2,r1};
            return {r1,r2};
        }
    }
};

// { Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;
        Solution ob;
        vector<int> roots = ob.quadraticRoots(a, b, c);
        if (roots.size() == 1 && roots[0] == -1)
            cout << "Imaginary";
        else
            for (int i = 0; i < roots.size(); i++) cout << roots[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends
