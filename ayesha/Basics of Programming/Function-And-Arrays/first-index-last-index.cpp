#include <iostream>
using namespace std;

int binaryFirst(int arr[], int low, int high, int d)
{
    int fi = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] < d)
        {
            low = mid + 1;
        }
        else if (arr[mid] > d)
        {
            high = mid - 1;
        }
        else
        {
            fi = mid;
            high = mid - 1;
        }
    }
    return fi;
}

int binaryLast(int arr[], int low, int high, int d)
{
    int li = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] < d)
        {
            low = mid + 1;
        }
        else if (arr[mid] > d)
        {
            high = mid - 1;
        }
        else
        {
            li = mid;
            low = mid + 1;
        }
    }
    return li;
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int data;
    cin >> data;
    // write your code here
    int a = binaryFirst(arr, 0, n - 1, data);
    cout << a;
    cout << "\n";
    int b = binaryLast(arr, 0, n - 1, data);
    cout << b;
}