#include <iostream>
using namespace std;
int main()
{
    int n, num, d = 0;
    cout << "Enter the number: " << endl;
    cin >> n;
    while (n != 0)
    {
        num = n % 10;
        n = n / 10;
        cout << num;
    }
}