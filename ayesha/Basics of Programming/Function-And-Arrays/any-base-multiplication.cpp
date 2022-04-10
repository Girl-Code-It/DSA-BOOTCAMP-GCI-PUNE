#include <iostream>
#include <math.h>
using namespace std;

int getSum(int b, int n1, int n2)
{
    // write your code here
    int sum = 0;
    int count = -1;
    int carry = 0;
    while (n1 != 0 || n2 != 0 || carry != 0)
    {
        count++;
        int ld1 = n1 % 10;
        int ld2 = n2 % 10;
        n1 = n1 / 10;
        n2 = n2 / 10;
        int ld = ld1 + ld2 + carry;
        carry = ld / b;
        ld = ld % b;
        int res = ld * pow(10, count);
        sum += res;
    }
    return sum;
}

int oneDigitProduct(int b, int n1, int ld2)
{
    int oneSum = 0;
    int count = -1;
    int carry = 0;
    while (n1 > 0 || carry > 0)
    {
        count++;
        int ld1 = n1 % 10;
        n1 = n1 / 10;
        int ld = ld1 * ld2 + carry;

        carry = ld / b;
        ld = ld % b;
        oneSum += ld * pow(10, count);
    }
    return oneSum;
}


int getProduct(int b, int n1, int n2)
{
    int sumAll = 0;
    int count = -1;
    while (n2 > 0)
    {
        count++;
        int ld2 = n2 % 10;
        n2 = n2 / 10;

        int all = oneDigitProduct(b, n1, ld2);
        sumAll = getSum(b, sumAll, all * pow(10, count));
    }
    return sumAll;
}

int main()
{
    int b, n1, n2;
    cin >> b >> n1 >> n2;
    cout << getProduct(b, n1, n2) << endl;
}