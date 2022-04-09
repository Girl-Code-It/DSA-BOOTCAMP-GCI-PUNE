#include <iostream>
#include <math.h>

using namespace std;

int getDifference(int b, int n1, int n2)
{
    // write your code here
    int diff = 0;
    int count = -1;
    int carry = 0;
    while (n2 > 0)
    {
        count++;
        int ld1 = n1 % 10;
        int ld2 = n2 % 10;
        n1 = n1 / 10;
        n2 = n2 / 10;
        int ld = 0;
        ld2 = ld2 + carry;
        if (ld2 >= ld1)
        {
            carry = 0;
            ld = ld2 - ld1;
        }
        else
        {
            carry = -1;
            ld = ld2 + b - ld1;
        }
        diff += ld * pow(10, count);
    }
    return diff;
}

int main()
{
    int b, n1, n2;
    cin >> b >> n1 >> n2;
    cout << getDifference(b, n1, n2) << endl;
}