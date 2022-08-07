#include <iostream>
using namespace std;

void display(int arr[], int idx, int n)
{
    // write your code here
    if (idx == n)
    {
        return;
    }
    if (idx == 0)
    {
        cout << arr[0] << "\n";
    }
    display(arr + 1, idx, n - 1);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    display(arr, 0, n);
}
