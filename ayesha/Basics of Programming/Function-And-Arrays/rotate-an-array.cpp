#include <iostream>
using namespace std;

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void reverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void leftRotate(int arr[], int n, int k)
{
    if (k == 0)
    {
        return;
    }
    k = k % n;
    reverseArray(arr, 0, -k - 1);
    reverseArray(arr, -k, n - 1);
    reverseArray(arr, 0, n - 1);
}
void rightRotate(int arr[], int n, int k)
{
    if (k == 0)
    {
        return;
    }
    k = k % n;
    reverseArray(arr, 0, n - 1);
    reverseArray(arr, 0, k - 1);
    reverseArray(arr, k, n - 1);
}

void rotateFinal(int arr[], int n, int k)
{
    if (k > 0)
    {
        rightRotate(arr, n, k);
        display(arr, n);
    }
    else if (k < 0)
    {
        leftRotate(arr, n, k);
        display(arr, n);
    }
    else
    {
        display(arr, n);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    rotateFinal(arr, n, k);
    return 0;
}