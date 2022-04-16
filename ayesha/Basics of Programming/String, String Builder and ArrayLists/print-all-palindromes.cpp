#include <iostream>
#include <string.h>
using namespace std;

bool isPalindrome(string s)
{
    int l = s.length();
    int low = 0;
    int high = l - 1;
    while (low <= high)
    {
        if (s[low] != s[high])
        {
            return false;
        }
        low++;
        high--;
    }
    return true;
}

void printallpralindrome(string str)
{
    // write your code here
    int l = str.length();
    for (int i = 0; i < l; i++)
    {
        for (int j = 1; i + j <= l; j++)
        {
            string s = str.substr(i, j);
            if (isPalindrome(s))
            {
                cout << s << "\n";
            }
        }
    }
}

int main()
{
    string str;
    getline(cin, str);
    printallpralindrome(str);
    return 0;
}