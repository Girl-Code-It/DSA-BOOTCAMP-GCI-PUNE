#include <iostream>
using namespace std;

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
    int low = 0;
    int high = n - 1;
    int one = arr[0];
    int two = arr[n];
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] > data)
        {
            high = mid - 1;
            two = arr[mid];
        }
        else if (arr[mid] < data)
        {
            low = mid + 1;
            one = arr[mid];
        }
        else
        {
            one = two = arr[mid];
            break;
        }
    }
    cout << two << "\n"
         << one;
}