// 1. You've to display the digits of a number.
// 2. Take as input "n", the number for which digits have to be displayed.
// 3. Print the digits of the number line-wise.

#include <iostream>
using namespace std;

void print_digit(int n)
{
    if (n == 0)
    {
        return;
    }
    int r = n % 10;
    print_digit(n / 10);
    cout << r << "\n";
}

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    print_digit(n);
    // write your code here
    return 0;
}
