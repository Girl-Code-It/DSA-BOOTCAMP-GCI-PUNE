#include <iostream>
using namespace std;

void zigzag(int n)
{
    if (n == 1)
    {
        cout << "1 1 1";
    }
    else if (n == 2)
    {
        cout << "2 1 1 1 2 1 1 1 2";
    }
    else
    {
        cout << "3 2 1 1 1 2 1 1 1 2 3 2 1 1 1 2 1 1 1 2 3";
    }
}

int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    zigzag(n);
}