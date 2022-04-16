#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    // n should be any decimal number
    int n, b;
    cin >> n >> b;
    int sum = 0;
    int count = -1;
    while (n != 0)
    {
        count++;
        int rem = n % b;
        n = n / b;
        int res = rem * pow(10, count);
        sum += res;
    }
    cout << sum;
    return 0;
}