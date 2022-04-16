#include <iostream>
using namespace std;
int main()
{
    int r1, c1, r2, c2;
    cin >> r1 >> c1;
    ;
    int mat1[100][100];

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> mat1[i][j];
        }
    }
    cin >> r2 >> c2;
    int mat2[100][100];
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> mat2[i][j];
        }
    }

    int res[100][100];
    if (c1 != r2)
    {
        cout << "Invalid input\n";
    }
    else
    {
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                int sum = 0;
                for (int k = 0; k < r2; k++)
                {
                    sum += mat1[i][k] * mat2[k][j];
                }
                res[i][j] = sum;
            }
        }
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << res[i][j] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}