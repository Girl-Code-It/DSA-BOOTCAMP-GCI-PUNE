#include <iostream>
#include <cmath>
using namespace std;

void base(int num, int b)
{
    int no, mul = 0, flag = 0, p;
    while (num != 0)
    {
        no = num % 10;
        p = pow(b, flag);
        p = p * no;
        mul = mul + p;
        flag++;
        num = num / 10;
    }
    cout << mul;
}

int main()
{
    int num, b;
    cout << "Enter the number: " << endl;
    cin >> num;
    cout << "Enter the base: " << endl;
    cin >> b;
    base(num, b);
}