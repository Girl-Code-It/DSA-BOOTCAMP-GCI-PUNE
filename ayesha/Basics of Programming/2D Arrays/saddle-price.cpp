#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void saddle_point(int n, vector<vector<int>> &arr)
{
    // write your code here
    for (int i = 0; i < n; i++)
    {
        int min = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] < arr[i][min])
                min = j;
        }
        bool flag = true;
        for (int k = 0; k < n; k++)
        {
            if (arr[k][min] > arr[i][min])
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            cout << arr[i][min];
            return;
        }
    }
    cout << "Invalid input";
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    saddle_point(n, arr);
}