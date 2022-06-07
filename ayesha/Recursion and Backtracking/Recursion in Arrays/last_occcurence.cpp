#include <iostream>
using namespace std;
int lastIndex(int arr[], int idx, int x, int n)
{
    // write your code here
    if (n <=0)
    {
        return -1;
    }
    if (arr[n-1] == x)
    {
        return n-1;
    }
    lastIndex(arr, idx, x, n - 1);
}

int main()
{
    int n;
    cin >> n;
    int d;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> d;
    int p = lastIndex(arr, 0, d, n);
    cout << p << endl;
}