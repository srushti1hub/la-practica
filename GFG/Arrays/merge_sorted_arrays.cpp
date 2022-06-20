#include <iostream>
using namespace std;

void print(int arr[], int length)
{
    cout << endl;
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
}
int merge(int *arr1, int *arr2, int n, int m)
{
    for (int j = m - 1; j >= 0; j--)
    {
        int i;
        for (i = n - 1; (i >= 0 && arr2[j] < arr1[i]); i--)
            arr1[i + 1] = arr1[i];

        arr1[i + 1] = arr2[j];
        n++;
        print(arr1, 10);
    }

    return *arr1;
}

int main()
{
    int arr1[10] = {1, 5, 9, 10, 15, 20};
    int arr2[4] = {2, 3, 8, 13};
    merge(arr1, arr2, 6, 4);
    return 0;
}
