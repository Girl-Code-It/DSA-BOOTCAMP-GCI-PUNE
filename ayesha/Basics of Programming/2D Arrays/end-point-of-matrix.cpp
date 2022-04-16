#include <iostream>
using namespace std;

const int mr = 100, mc = 100;

int **input(int **mat, int n, int m)
{
    mat = new int *[n];
    for (int i = 0; i < n; i++)
    {
        int *arr = new int[m];
        for (int j = 0; j < m; j++)
        {
            cin >> arr[j];
        }
        mat[i] = arr;
    }
    return mat;
}

int main(int argc, char **argv)
{
    int n, m;
    cin >> n >> m;
    int **mat = input(mat, n, m);

    // write your code here

    int dir = 0;
    int i = 0;
    int j = 0;
    while (true)
    {
        dir = (dir + mat[i][j]) % 4;
        if (dir == 0)
        {
            j++;
        }
        else if (dir == 1)
        {
            i++;
        }
        else if (dir == 2)
        {
            j--;
        }
        else if (dir == 3)
        {
            i--;
        }
        if (i < 0)
        {
            i++;
            break;
        }
        else if (j < 0)
        {
            j++;
            break;
        }
        else if (i == n)
        {
            i--;
            break;
        }
        else if (j == m)
        {
            j--;
            break;
        }
    }
    cout << i << "\n"
         << j << "\n";
    return 0;
}
