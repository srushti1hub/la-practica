#include <iostream>
#include <unordered_map>
using namespace std;

bool BruteForce(int arr[], int length, int sum)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            for (int k = j + 1; k < length; k++)
            {
                if (arr[i] + arr[j] + arr[k] == sum)
                    return 1;
            }
        }
    }
    return 0;
}

bool usingSort(int arr[], int length, int sum)
{
    std::sort(arr, arr + length);
    for (int i = 0; i < length - 1; i++)
    {
        int low = i + 1, high = length - 1;
        while (low < high)
        {
            if (arr[i] + arr[low] + arr[high] == sum)
                return 1;

            else if (arr[i] + arr[low] + arr[high] < sum)
                low++;

            else
                high--;
        }
    }
    return 0;
}

bool usingMap(int arr[], int length, int sum)
{
    for (int i = 0; i < length - 2; i++)
    {
        unordered_map<int, int> map;
        int currsum = sum - arr[i];
        for (int j = i + 1; j < length; j++)
        {
            if (map.find(currsum - arr[j]) != map.end())
                return 1;

            map[arr[j]] = j;
        }
    }
    return 0;
}

int main()
{
    int arr[] = {1, 4, 45, 6, 10, 8};
    cout << BruteForce(arr, 6, 22) << endl
         << usingSort(arr, 6, 22) << endl
         << usingMap(arr, 6, 22) << endl;
}
