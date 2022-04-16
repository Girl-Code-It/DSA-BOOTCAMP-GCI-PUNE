#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // write your code here
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int floor = 1; floor <= max; floor++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] >= floor)
            {
                cout << "*\t";
            }
            else
            {
                cout << "\t";
            }
        }
        cout << "\n";
    }
    return 0;
}