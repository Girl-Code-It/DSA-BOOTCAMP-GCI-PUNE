#include <bits/stdc++.h>
using namespace std;
void create(int arr[100][100], int n, int m)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
        }
    }
}
void display(int arr[100][100], int n, int m)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    //     Write your code here.
    int n, m;
    cin >> n >> m;
    int arr[100][100];
    create(arr, n, m);
    display(arr, n, m);
    return 0;
}