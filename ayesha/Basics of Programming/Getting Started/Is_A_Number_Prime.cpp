// 1. You've to check whether a given number is prime or not.
// 2. Take a number "t" as input representing count of input numbers to be tested.
// 3. Take a number "n" as input "t" number of times.
// 4. For each input value of n, print "prime" if the number is prime and "not prime" otherwise.

#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int t;
    cin >> t;

    // write your code here
    while (t--)
    {
        int n, i, m = 0, flag = 0;
        cin >> n;
        m = n / 2;
        for (i = 2; i <= m; i++)
        {
            if (n % i == 0)
            {
                cout << "not prime\n";
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "prime\n";
        }
    }
}