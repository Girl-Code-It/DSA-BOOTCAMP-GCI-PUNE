#include <iostream>
#include <cmath>

using namespace std;

int dig(int n)
{
    int dig = 0;
    while (n > 0)
    {
        dig++;
        n /= 10;
    }
    return dig;
}

void rot(int n, int k)
{
    int x = dig(n);
    k = ((k % x) + x) % x;
    int left_no = n / (int)(pow(10, x - k));
    n = n % (int)(pow(10, x - k));
    int left_digit = dig(left_no);
    n = (n * (int)(pow(10, left_digit))) + left_no;
    cout << n;
}

int main()
{
    int n, k;
    cout << "Enter the number:" << endl;
    cin >> n;
    cout << "Enter the rotation limit:" << endl;
    cin >> k;
    rot(n, k);
    return 0;
}