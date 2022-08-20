//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    string arr[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    public:
    void helper(int a[],vector<string> &ans,int N,int i,string str){
        if(i>=N){
            ans.push_back(str);
            return;
        }
        string temp = arr[a[i]];
        for(int j=0; j<temp.size(); j++){
            str.push_back(temp[j]);
            helper(a,ans,N,i+1,str);
            str.pop_back();
        }
    }
    //Function to find list of all words possible by pressing given numbers.
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
        vector<string> ans;
        if(N==0) return ans;
        helper(a,ans,N,0,"");
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}
// } Driver Code Ends
