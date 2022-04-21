#include <iostream>
using namespace std;

void printDecreasing(int n)
{
    // write your code here
    if (n == 0)
    {
        return;
    }
    cout << n << "\n";
    printDecreasing(n - 1);
}

int main()
{
    int n;
    cin >> n;
    printDecreasing(n);
}
