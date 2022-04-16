#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;

    // write your code here

    int out = n / 2;
    int inner = -1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= out; j++)
        {
            cout << "\t";
        }
        cout << "*\t";
        for (int j = 1; j <= inner; j++)
        {
            cout << "\t";
        }
        if (i > 1 && i < n)
        {
            cout << "*\t";
        }
        if (i <= n / 2)
        {
            out--;
            inner += 2;
        }
        else
        {
            out++;
            inner -= 2;
        }
        cout << "\n";
    }
}