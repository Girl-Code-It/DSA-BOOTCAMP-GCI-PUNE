#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int n;
    cin >> n;

    // write your code here
    int stars = 1;
    int spaces = 2 * n - 3;
    for (int i = 1; i <= n; i++)
    {
        int x = 1;
        for (int j = 1; j <= stars; j++)
        {
            cout << x << "\t";
            x++;
        }
        for (int j = 1; j <= spaces; j++)
        {
            cout << "\t";
        }
        if (i == n)
        {
            stars--;
            x--;
        }
        for (int j = 1; j <= stars; j++)
        {
            x--;
            cout << x << "\t";
        }
        stars--;
        spaces -= 2;
        cout << "\n";
    }
}