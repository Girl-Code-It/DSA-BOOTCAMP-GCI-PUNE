// 1. You are required to display the prime factorization of a number.
//     2. Take as input a number n.
//     3. Print all its prime factors from smallest to largest.

#include <iostream>
#include <math.h>
using namespace std;
void prime_factorisation(int n)
{
    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 1)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
    }
    if (n > 2)
    {
        cout << n;
    }
}
int main(int argc, char **argv)
{
    int n;
    cin >> n;
    prime_factorisation(n);
    // write your code here
}
