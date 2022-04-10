#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1;
    int *a1 = new int[n1];
    for (int i = 0; i < n1; i++)
    {
        cin >> a1[i];
    }

    cin >> n2;
    int *a2 = new int[n2];
    for (int i = 0; i < n2; i++)
    {
        cin >> a2[i];
    }

    // write your code here
    int diff[n2];
    int i = n1 - 1;
    int j = n2 - 1;
    int carry = 0;
    while (j >= 0)
    {
        int digit = 0;
        int m = i >= 0 ? a1[i] : 0;
        if (a2[j] + carry >= m)
        {
            digit = a2[j] + carry - m;
            carry = 0;
        }
        else
        {
            digit = a2[j] + 10 + carry - m;
            carry = -1;
        }
        diff[j] = digit;
        i--;
        j--;
    }
    int index = 0;
    while (diff[index] == 0)
    {
        ++index;
    }
    while (index < n2)
    {
        cout << diff[index++] << "\n";
    }
}