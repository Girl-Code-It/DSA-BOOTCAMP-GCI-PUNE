#include <iostream>
using namespace std;

const int mr = 100, mc = 100;
void inputBound(int (&mat)[mr][mc], int n, int m)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
}

int main(int argc, char **argv)
{

    int mat[mr][mc] = {0};
    int n, m;
    cin >> n >> m;

    inputBound(mat, n, m);

    // write your code here
    int minR = 0;
    int minC = 0;
    int maxR = n - 1;
    int maxC = m - 1;
    int t = n * m;
    int count = 0;

    while (count < t)
    {
        //   left wall
        for (int i = minR; i <= maxR && count < t; i++)
        {
            cout << mat[i][minC] << endl;
            count++;
        }
        minC++;
        // bottom wall
        for (int j = minC; j <= maxC && count < t; j++)
        {
            cout << mat[maxR][j] << endl;
            count++;
        }
        maxR--;
        // right wall
        for (int i = maxR; i >= minR && count < t; i--)
        {
            cout << mat[i][maxC] << endl;
            count++;
        }
        maxC--;

        // top wall
        for (int j = maxC; j >= minC && count < t; j--)
        {
            cout << mat[minR][j] << endl;
            count++;
        }
        minR++;
    }

    return 0;
}
