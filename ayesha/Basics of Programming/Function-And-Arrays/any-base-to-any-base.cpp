#include <iostream>
#include <math.h>
using namespace std;

int basetodec(int n, int b)
{
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
    return sum;
}

int dectobase(int n, int b)
{
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
    return sum;
}

int anytoany(int n, int b1, int b2)
{
    int base = basetodec(n, b1);
    int dec = dectobase(base, b2);
}

int main()
{
    int n, b1, b2;
    cin >> n >> b1 >> b2;
    cout << anytoany(n, b1, b2);
    return 0;
}