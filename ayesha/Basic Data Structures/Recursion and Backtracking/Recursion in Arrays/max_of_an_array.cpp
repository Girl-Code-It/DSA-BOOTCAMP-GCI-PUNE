#include <iostream>
#include <algorithm>
using namespace std;

int findMinRec(int arr[], int idx, int n)
{
    // write your code here
    if (n == 1)
    {
        return arr[0];
    }
    return max(arr[n - 1], findMinRec(arr, idx, n - 1));
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
    cout << findMinRec(arr, 0, n) << endl;
}
