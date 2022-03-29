#include <iostream>
using namespace std;
int main()
{
    int n, d = 0;
    cout << "Digit: " << endl;
    cin >> n;
    while (n != 0)
    {
        n = n / 10;
        d++;
    }
    cout << "Total digits are " << d << endl;
}