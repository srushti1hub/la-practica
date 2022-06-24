#include <iostream>
using namespace std;

// User function template for C++

class Solution
{
public:
    int binarysearch(int arr[], int n, int k)
    {
        // code here
        return Bsearch(arr, 0, n - 1, k);
    }
    int Bsearch(int arr[], int low, int high, int k)
    {
        if (low > high)
            return -1;

        while (low <= high)
        {
            int mid = low + high >> 1;

            if (arr[mid] == k)
                return mid;

            if (arr[mid] < k)
                return Bsearch(arr, mid + 1, high, k);

            return Bsearch(arr, low, mid - 1, k);
        }
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++)
            cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}
// } Driver Code Ends
