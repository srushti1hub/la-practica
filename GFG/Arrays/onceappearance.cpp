// Find the element that appears once in an array where every other element appears twice.
#include <iostream>
#include <set>
#include <numeric>
using namespace std;

int bruteForce(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        int count = 0;
        for (int j = 0; j < length; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
            return arr[i];
    }
    return -1;
}

int usingSets(int arr[], int length)
{
    set<int> Set(arr, arr + length);
    int Setsum = std::accumulate(Set.begin(), Set.end(), 0);
    int Arrsum = std::accumulate(arr, arr + length, 0);

    if (2 * Setsum - Arrsum)
        return 2 * Setsum - Arrsum;

    return -1;
}

int usingXOR(int arr[], int length)
{
    int num = arr[0];
    for (int i = 1; i < length; i++)
    {
        num = num ^ arr[i];
    }

    if (num)
        return num;

    return -1;
}

int usingBsearch(int arr[], int length)
{
    int high = length - 1, low = 0, mid;
    std::sort(arr,arr+length);
    // Boundary Checks
    if (high == 0)
        return arr[0];

    if (arr[0] != arr[1])
        return arr[0];

    if (arr[high] != arr[high - 1])
        return arr[high];

    while (low <= high)
    {
        mid = (high + low) >> 1;

        // Unique index property
        if (arr[mid] != arr[mid + 1] && arr[mid] != arr[mid - 1])
            return arr[mid];

        // Pair index property & partioning property
        if ((mid % 2 == 0 && arr[mid] == arr[mid + 1]) || (mid % 2 == 1 && arr[mid] == arr[mid - 1]))
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}

int main()
{
    int arr[] = {7, 3, 5, 4, 5, 3, 4};
    cout << bruteForce(arr, 7) << endl
         << usingSets(arr, 7) << endl
         << usingXOR(arr, 7) << endl
         << usingBsearch(arr, 7);
    return 0;
}
