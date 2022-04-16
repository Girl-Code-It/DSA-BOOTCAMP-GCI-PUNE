#include <iostream>
#include <string>
using namespace std;

int fact(int num)
{
    if (num == 0 || num == 1)
    {
        return num;
    }
    else
    {
        return num * fact(num - 1);
    }
}

void printallperm(string str)
{
    // write your code here
    int n = str.length();
    int f = fact(n);
    int k = 0;
    while (k < f)
    {
        string s = str;
        int temp = k;
        for (int i = n; i >= 1; i--)
        {
            int r = temp % i;
            temp = temp / i;
            cout << s[r];
            s.erase(r, 1);
        }
        cout << "\n";
        k++;
    }
}
int main()
{
    string str;
    getline(cin, str);
    printallperm(str);
}