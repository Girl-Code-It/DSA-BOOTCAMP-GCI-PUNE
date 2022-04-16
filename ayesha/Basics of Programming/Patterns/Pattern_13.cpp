#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int fact = 1;
        for (int j = 0; j <= i; j++)
        {
            cout << fact << "\t";
            int fact1 = fact * (i - j) / (j + 1);
            fact = fact1;
        }
        cout << "\n";
    }

    // write your code here
}
