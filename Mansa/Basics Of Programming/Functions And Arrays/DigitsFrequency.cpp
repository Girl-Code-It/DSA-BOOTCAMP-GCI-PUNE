#include <iostream>
using namespace std;
void freq(int num, int n)
{
    int i, flag = 0, no;
    while (num != 0)
    {
        no = num % 10;
        if (no == n)
        {
            flag++;
        }
        num = num / 10;
    }
    cout << flag;
}

int main()
{
    int num, n;
    cout << "Enter the number: " << endl;
    cin >> num;
    cout << "Enter the digit to be checked: " << endl;
    cin >> n;
    freq(num, n);
}