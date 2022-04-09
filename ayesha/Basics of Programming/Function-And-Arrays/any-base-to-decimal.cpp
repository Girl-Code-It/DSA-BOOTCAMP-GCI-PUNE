#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, b;
    cin >> n >> b;
    int sum = 0;
    int count = -1;
    while (n != 0)
    {
        count++;
        int rem = n % 10;
        n = n / 10;
        int res = rem * pow(b, count);
        sum += res;
    }
    cout << sum;
    return 0;
}