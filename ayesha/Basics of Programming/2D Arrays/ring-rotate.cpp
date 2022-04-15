#include <bits/stdc++.h>
using namespace std;

void display(vector<vector<int>> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void reverse(vector<int> oned, int start, int end)
{
    while (start <= end)
    {
        int temp = oned[start];
        oned[start] = oned[end];
        oned[end] = temp;
    }
    start++;
    end--;
}

void rotate(vector<int> &oned, int r)
{
    int sz = oned.size();
    r = r % sz;
    if (r < 0)
    {
        r += sz;
    }
    reverse(oned, 0, oned.size() - 1 - r);
    reverse(oned, oned.size() - r, oned.size() - 1);
    reverse(oned, 0, oned.size() - 1);
}

vector <int> fillOnedFromShell(vector<vector<int>> &arr, int s)
{
    int minR = s - 1;
    int minC = s - 1;
    int maxR = arr.size() - s;
    int maxC = arr[0].size() - s;
    int size = 2 * (maxR - minR + maxC - minC);
    vector<int> arr2(size);
    int count = 0;

    //   left wall
    for (int i = minR; i <= maxR; i++)
    {
        arr2[count] = arr[i][minC];
        count++;
    }
    // bottom wall
    for (int j = minC + 1; j <= maxC; j++)
    {
        arr2[count] = arr[minR][j];
        count++;
    }
    // right wall
    for (int i = maxR - 1; i >= minR; i--)
    {
        arr2[count] = arr[i][maxC];
        count++;
    }

    // top wall
    for (int j = maxC - 1; j >= minC + 1; j--)
    {
        arr2[count] = arr[minR][j];
        count++;
    }
    return arr2;
}

void fillShellFromOned(vector<vector<int>> &arr, int s, vector<int> &arr2)
{
    int minR = s - 1;
    int minC = s - 1;
    int maxR = arr.size() - s;
    int maxC = arr[0].size() - s;
    int count = 0;

    //   left wall
    for (int i = minR; i <= maxR; i++)
    {
        arr[i][minC] = arr2[count];
        count++;
    }
    // bottom wall
    for (int j = minC + 1; j <= maxC; j++)
    {
        arr[minR][j] = arr2[count];
        count++;
    }
    // right wall
    for (int i = maxR - 1; i >= minR; i--)
    {
        arr[i][maxC] = arr2[count];
        count++;
    }

    // top wall
    for (int j = maxC - 1; j >= minC + 1; j--)
    {
        arr[minR][j] = arr2[count];
        count++;
    }
}

void rotateShell(vector<vector<int>> &arr, int s, int r)
{
    vector<int> oned = fillOnedFromShell(arr, s);
    rotate(oned, r);
    fillShellFromOned(arr, s, oned);
}

int main()
{
    int n, m, s, r;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    cin >> s >> r;
    rotateShell(arr,s,r);
    display(arr);
    return 0;
}