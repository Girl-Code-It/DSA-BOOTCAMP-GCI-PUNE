#include <iostream>
#include <algorithm>
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

    int size = n1 > n2 ? n1 : n2;
    int sum[size];

    reverse(a1, a1 + n1);
    reverse(a2, a2 + n2);
    // write your code here
    for (int i = 0; i < size; i++)
    {
        sum[i] = a1[i] + a2[i];
    }
    for (int i = size - 1; i >= 0; i)
    {
        cout << sum[i] << "\n";
    }
}