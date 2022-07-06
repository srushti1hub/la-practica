class Solution {
public:
    int arr[31] = {0};
    int fib(int n) {
        if(n<=1)
            return n;
        
        if(arr[n])
            return arr[n];
        
        return arr[n] = fib(n-1) + fib(n-2);
    }
};
