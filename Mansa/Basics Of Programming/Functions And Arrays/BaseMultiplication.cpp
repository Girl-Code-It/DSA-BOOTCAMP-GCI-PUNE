#include <iostream>
#include <cmath>

using namespace std;
void add(int b, int n1, int n2)
{
    int flag1 = 0, flag2 = 0, no, mul1 = 0, mul2 = 0, p, mul;
    while (n1 != 0)
    {
        no = n1 % 10;
        p = pow(b, flag1);
        mul1 = mul1 + p * no;
        n1 = n1 / 10;
    }
    while (n2 != 0)
    {
        no = n2 % 10;
        p = pow(b, flag2);
        mul2 = mul2 + p * no;
        n2 = n2 / 10;
    }
    mul = mul1 * mul2;
    while (mul != 0)
    {
        no = mul % b;
        cout << no;
        mul = mul / b;
    }
}

int main()
{
    int b, n1, n2;
    cout << "Enter the base: " << endl;
    cin >> b;
    cout << "Enter n1: " << endl;
    cin >> n1;
    cout << "Enter n2: " << endl;
    cin >> n2;
    add(b, n1, n2);
}