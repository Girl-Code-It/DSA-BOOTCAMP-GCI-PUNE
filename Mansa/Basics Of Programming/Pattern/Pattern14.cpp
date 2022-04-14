#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cout << "Enter a number: " << endl;
    cin >> n;
    cout << "The multiplication table of " << n << "is "
         << ": " << endl;
    for (i = 1; i <= 10; i++)
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }
}