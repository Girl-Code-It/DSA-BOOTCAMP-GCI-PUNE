#include <iostream>
#include <vector>

using namespace std;

void columnTraversal(vector<vector<int>> mat)
{
    int row = mat.size();
    int col = mat[0].size();
    for (int i = 0; i < col; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < row; j++)
            {
                cout << mat[j][i] << "\n";
            }
        }
        else
        {
            for (int j = row - 1; j >= 0; j--)
            {
                cout << mat[j][i] << "\n";
            }
        }
    }
}

int main()
{
    int n;
    int m;
    cin >> n;
    cin >> m;

    vector<vector<int>> mat;
    for (int i = 0; i < n; i++)
    {
        vector<int> arr;
        for (int j = 0; j < m; j++)
        {
            int ele;
            cin >> ele;
            arr.push_back(ele);
        }
        mat.push_back(arr);
    }

    columnTraversal(mat);
}