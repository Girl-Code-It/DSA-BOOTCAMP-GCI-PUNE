#include <iostream>
using namespace std;
bool isPrime(int num)
{
    for (int i = 2; i <= num / i; ++i)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main(int argc, char **argv)
{
    int low, high;
    cin >> low >> high;
    // write your code here
    for (int i = low; i <= high; i++)
    {
        if (isPrime(i))
        {
            cout << i << "\n";
        }
    }
    return 0;
}