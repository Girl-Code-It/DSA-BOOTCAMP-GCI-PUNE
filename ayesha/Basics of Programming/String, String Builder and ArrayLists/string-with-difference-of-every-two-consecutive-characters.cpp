#include <iostream>
#include <string.h>

using namespace std;

void printstr(string str)
{
    // write your code here
    int low = 0;
    int high = str.length() - 2;
    while (low <= high)
    {
        int d = str[low + 1] - str[low];
        cout << str[low] << d;
        low++;
    }
    cout << str[low];
}
int main()
{
    string str;
    getline(cin, str);
    printstr(str);
    return 0;
}