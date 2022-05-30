#include <iostream>
using namespace std;

int Search(int arr[], int current_length, int key)
{
    for (int i = 0; i < current_length; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int Insert(int arr[], int &current_length, int key, int max_length)
{
    if (current_length == max_length)
    {
        return current_length;
    }
    arr[current_length] = key;
    return ++current_length;
}

int Delete(int arr[], int &current_length, int key, int max_length)
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
    return --current_length;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int current_length = 9, max_length = 10;
    cout << Search(arr, current_length, 5);
    cout << Search(arr, current_length, -5);
    cout << Insert(arr, current_length, 11, max_length);
    cout << Insert(arr, current_length, 12, max_length);
    cout << Delete(arr, current_length, 11, max_length);
    cout << Delete(arr, current_length, 12, max_length);
    return 0;
}