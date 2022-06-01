// Find the only repetitive element between 1 to n-1
#include <iostream>
#include <numeric>
using namespace std;

int Find(int arr[], int length)
{
    int sum = std::accumulate(arr, arr + length, 0);

    return sum - (length * (length - 1)) / 2;
}

int main()
{
    int arr[] = {1, 2, 3, 3, 4, 5, 6, 7, 8};
    cout << Find(arr, 9);
    return 0;
}
