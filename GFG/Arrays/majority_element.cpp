#include <iostream>
#include <unordered_map>
using namespace std;

/*
Brute Force Approach
Time Complexity = O(n^2)
Auxiliary Space = O(1)
*/
void BruteForce(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }

        if (count > n / 2)
        {
            cout << "Majority Element = " << arr[i] << "\n";
            return;
        }
    }
    cout << "No Majority Element :(\n";
}

/*
Using Binary Search Tree
Time Complexity = O(n^2) [can be reduced to O(nlogn) by using Self Balancing BST]
Auxiliary Space = O(n)
*/
struct node
{
    int key, count = 0; // frequency of each key
    struct node *left, *right;
};

struct node *newNode(int val)
{
    // dynamically allocating node
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->key = val;
    temp->count = 1;
    temp->left = temp->right = NULL;
    return temp;
}

struct node *Insert(struct node *node, int key, int &maxCount)
{
    if (node == NULL)
    {

        if (maxCount == 0)
            maxCount = 1;

        return newNode(key);
    }

    // inseting on left node
    if (key < node->key)
        node->left = Insert(node->left, key, maxCount);

    // inseting on right node
    else if (key > node->key)
        node->right = Insert(node->right, key, maxCount);

    // if same key value then incrementing frequency
    else
        node->count++;

    maxCount = max(maxCount, node->count);

    return node;
}

// inorder traversal
void Inorder(struct node *root, int n)
{
    if (root != NULL)
    {
        Inorder(root->left, n);

        if (root->count > (n / 2))
        {
            cout << "Majority Element = " << root->key << "\n";
            return;
        }

        Inorder(root->right, n);
    }
}

void usingBST(int arr[], int n)
{
    struct node *root = NULL;
    int maxCount = 0;

    for (int i = 0; i < n; i++)
    {
        root = Insert(root, arr[i], maxCount);
    }

    if (maxCount > (n / 2))
        Inorder(root, n);

    else
        cout << "No Majority Element :(\n";
}

/*
Using Sorting
Time Complexity = O(nlogn) [depends upon the sorting algorithm used,for std::sort (which is Introsort) = O(nlogn)]
Auxiliary Space = O(1)
*/
void usingSort(int arr[], int n)
{
    std::sort(arr, arr + n);
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        // comparing adjacent elements
        if (arr[i - 1] == arr[i])
        {
            count++;
        }

        else
        {
            if (count > n / 2)
            {
                cout << "Majority Element = " << arr[i - 1] << "\n";
                return;
            }
            count = 1;
        }
    }
    cout << "No Majority Element :(\n";
}

/*
Using HashMap
Time Complexity = O(n)
Auxiliary Space = O(n)
*/
void usingHashMap(int arr[], int n)
{
    unordered_map<int, int> Map;

    // hashmap stores the key value & their frequency
    for (int i = 0; i < n; i++)
        Map[arr[i]]++;

    int count = 0;
    for (auto i : Map)
    {
        if (i.second > n / 2)
        {
            count = 1;
            cout << "Majority Element = " << i.first << "\n";
            return;
        }
    }
    if (count == 0)
        cout << "No Majority Element :(\n";
}

/*
Using Boyer-Moore's Voting Algorithm
Time Complexity = O(n)
Auxiliary Space = O(1)
*/
void MajorityVoting_Algo(int arr[], int n)
{
    // choosing appropriate candidate
    int candidate = -1, votes = 0;
    for (int i = 0; i < n; i++)
    {
        if (!votes)
        {
            candidate = arr[i];
            votes = 1;
        }
        else
        {
            if (arr[i] == candidate)
                votes++;

            else
                votes--;
        }
    }

    // counting instances of candidate element
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == candidate)
            count++;
    }

    if (count > n / 2)
    {
        cout << "Majority Element = " << candidate << "\n";
        return;
    }

    cout << "No Majority Element :(\n";
}
int main()
{
    int arr[] = {1, 3, 3, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    BruteForce(arr, n);
    usingBST(arr, n);
    usingSort(arr, n);
    usingHashMap(arr, n);
    MajorityVoting_Algo(arr, n);
    return 0;
}
