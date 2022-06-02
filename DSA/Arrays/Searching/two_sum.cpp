// Given an array A[] and a number x, check for pair in A[] with sum as x (aka Two Sum)
#include <iostream>
#include <unordered_map>
using namespace std;

bool BruteForce(int arr[], int length, int sum)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                return true;
            }
        }
    }
    return false;
}

bool usingSort(int arr[], int length, int sum)
{
    int low = 0, high = length - 1;
    std::sort(arr, arr + length);
    while (low < high)
    {
        if (arr[low] + arr[high] == sum)
            return 1;

        else if (arr[low] + arr[high] < sum)
            low++;

        else
            high--;
    }
    return 0;
}

bool usingRemainders(int arr[], int length, int sum)
{
    int rem[sum];
    int i;

    for (i = 0; i < sum; i++)
    {
        rem[i] = 0;
    }

    for (i = 0; i < length; i++)
    {
        if (arr[i] < sum)
            rem[arr[i] % sum]++;
    }

    for (i = 0; i < sum / 2; i++)
    {
        if (rem[i] && rem[sum - i])
            return 1;
    }

    if (i >= sum / 2)
    {
        if (sum % 2)
        {
            if (rem[sum / 2] && rem[sum - sum / 2])
                return 1;
        }
        else
        {
            if (rem[sum / 2] > 1)
                return 1;
        }
    }
    return 0;
}

bool usingMap(int arr[], int length, int sum)
{
    unordered_map<int, int> map;
    for (int i = 0; i < length; i++)
    {
        if (map.find(sum - arr[i]) != map.end())
            return 1;

        map[arr[i]] = i;
    }
    return 0;
}

int main()
{
    int arr[] = {13, 45, 70, 26, 98};
    cout << BruteForce(arr, 5, 96) << endl
         << usingSort(arr, 5, 96) << endl
         << usingRemainders(arr, 5, 96) << endl
         << usingMap(arr, 5, 96) << endl;
    return 0;
}
