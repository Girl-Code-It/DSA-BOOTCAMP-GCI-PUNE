#include <iostream>
#include <math.h>
using namespace std;

int dectobin(int n)
{
    int sum = 0;
    int count = -1;
    while (n != 0)
    {
        count++;
        int rem = n % 2;
        n = n / 2;
        int res = rem * pow(10, count);
        sum += res;
    }
    return sum;
}

void subarray(int arr[], int n)
{
    int subsets = pow(2, n);
    for (int i = 0; i < subsets; i++)
    {
        int bn = dectobin(i);
        int div = pow(10, n - 1);
        for (int j = 0; j < n; j++)
        {
            int q = bn / div;
            int r = bn % div;
            if (q == 0)
            {
                cout << "-\t";
            }
            else
            {
                cout << arr[j] << "\t";
            }
            bn = r;
            div /= 10;
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    subarray(arr, n);
    return 0;
}