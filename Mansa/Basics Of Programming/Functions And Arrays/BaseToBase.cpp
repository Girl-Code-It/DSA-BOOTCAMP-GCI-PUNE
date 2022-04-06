#include <iostream>
#include <cmath>
using namespace std;
void btob(int num, int b1, int b2)
{
    int no, mul = 0, flag = 0, p;
    while (num != 0)
    {
        no = num % 10;
        p = pow(b1, flag);
        p = p * no;
        mul = mul + p;
        flag++;
        num = num / 10;
    }
    while (mul != 0)
    {
        no = mul % b2;
        cout << no;
        num = num / b2;
    }
}

int main()
{
    int num, b1, b2;
    cout << "Enter the number: " << endl;
    cin >> num;
    cout << "Base 1: " << endl;
    cin >> b1;
    cout << "Base 2: " << endl;
    cin >> b2;
    btob(num, b1, b2);
}