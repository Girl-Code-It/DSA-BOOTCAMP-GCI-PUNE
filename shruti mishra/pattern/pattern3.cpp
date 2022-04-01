#include <iostream>
using namespace std;

// int main(int argc, char** argv)

int main()
{
    int n, i, j, k;
    cin >> n;

    // write your code here

    for (int i = 1; i <= n; i++)
    {
        for (int k = n - 1; k >= i; k--)
        {
            cout <<"\t";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*\t";
            //   j--;
        }
        cout << "\n";
    }
}