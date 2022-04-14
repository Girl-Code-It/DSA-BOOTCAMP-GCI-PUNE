#include <iostream>
using namespace std;
void base(int num, int b)
{
    int no;
    while (num != 0)
    {
        no = num % b;
        cout << no;
        num = num / b;
    }
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