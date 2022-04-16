#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int n = matrix.size();
    if (n == 0)
    {
        return false;
    }
    int i = 0;
    int j = n - 1;

    while (i < n && j >= 0)
    {
        if (matrix[i][j] == target)
        {
            cout << i << "\n"
                 << j;
            return true;
        }
        else if (matrix[i][j] < target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return false;
}

int main()
{
    int n, target;
    cin >> n;
    vector<vector<int>> mat(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> mat[i][j];
    cin >> target;

    if (!searchMatrix(mat, target))
        cout << "Not Found\n";
}