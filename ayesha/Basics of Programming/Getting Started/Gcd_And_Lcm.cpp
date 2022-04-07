// 1. You are required to print the Greatest Common Divisor (GCD) of two numbers.
// 2. You are also required to print the Lowest Common Multiple (LCM) of the same numbers.
// 3. Take input "num1" and "num2" as the two numbers.
// 4. Print their GCD and LCM.

#include <iostream>
using namespace std;

void gcd(int n1, int n2)
{
    while (n1 != n2)
    {
        if (n1 > n2)
        {
            n1 -= n2;
        }
        else
        {
            n2 -= n1;
        }
    }
    cout << n1 << "\n";
}

void lcm(int n1, int n2)
{
    int x, lcm;
    for (int i = 1; i <= n1 && i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            x = i;
        }
    }
    lcm = (n1 * n2) / x;
    cout << lcm << "\n";
}

int main(int argc, char **argv)
{
    int num1, num2;
    cin >> num1 >> num2;
    gcd(num1, num2);
    lcm(num1, num2);
    // write your code here
    return 0;
}