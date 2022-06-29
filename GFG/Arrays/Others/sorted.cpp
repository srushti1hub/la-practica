#include <iostream>
using namespace std;

void print(int arr[], int current_length)
{
    for (int i = 0; i < current_length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int Search(int arr[], int low, int high, int key)
{
    if (high < low)
    {
        cout << "Element not found :(\n";
        return -1;
    }

    int mid = high + low / 2;

    if (arr[mid] == key)
    {
        cout << "Element found at index : " << mid << "\n";
        return mid;
    }

    if (arr[mid] < key)
        return Search(arr, mid + 1, high, key);

    return Search(arr, low, mid - 1, key);
}

int Insert(int arr[], int &current_length, int max_length, int key)
{
    if (current_length >= max_length)
    {
        cout << "Size exceeded :(\n";
        return current_length;
    }

    int i;
    for (i = current_length - 1; (i >= 0 && key < arr[i]); i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[i + 1] = key;
    cout << "Element added at index : " << i + 1 << "\n";
    print(arr, current_length + 1);
    return ++current_length;
}

int Delete(int arr[], int &current_length, int key)
{
    int pos = Search(arr, 0, current_length - 1, key);

    if (pos == -1)
    {
        return current_length;
    }

    for (int i = pos; i < current_length; i++)
    {
        arr[i] = arr[i + 1];
    }

    cout << "Element deleted\n";
    print(arr, current_length - 1);
    return --current_length;
}

int main()
{
    int arr[10] = {5, 7, 12, 23, 30, 48, 51, 66, 74};
    int current_length = 9, max_length = 10;
    Search(arr, 0, current_length - 1, 5);
    Search(arr, 0, current_length - 1, -5);
    Insert(arr, current_length, max_length, 27);
    Insert(arr, current_length, max_length, 0);
    Delete(arr, current_length, 3);
    Delete(arr, current_length, 12);
    return 0;
}
