#include <iostream>
using namespace std;

void Print(int arr[], int current_length)
{
    for (int i = 0; i < current_length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int Search(int arr[], int current_length, int key)
{
    for (int i = 0; i < current_length; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element found at index : " << i << "\n";
            return i;
        }
    }
    cout << "Element not found :(\n";
    return -1;
}

int Insert(int arr[], int &current_length, int key, int max_length)
{
    if (current_length == max_length)
    {
        cout << "Size exceeded :(\n";
        return current_length;
    }
    arr[current_length] = key;

    cout << "Element added at index : " << current_length << "\n";
    Print(arr, current_length + 1);
    return ++current_length;
}

int Delete(int arr[], int &current_length, int key)
{
    int pos = Search(arr, current_length, key);
    if (pos == -1)
    {
        return current_length;
    }
    for (int i = pos; i < current_length; i++)
    {
        arr[i] = arr[i + 1];
    }
    cout << "Element deleted\n";
    Print(arr, current_length - 1);
    return --current_length;
}

int main()
{
    int arr[10] = {5, 2, 8, 4, 7, 6, 1, 3, 9};
    int current_length = 9, max_length = 10;
    Search(arr, current_length, 5);
    Search(arr, current_length, -5);
    Insert(arr, current_length, 11, max_length);
    Insert(arr, current_length, 13, max_length);
    Delete(arr, current_length, 8);
    Delete(arr, current_length, -2);
    return 0;
}
