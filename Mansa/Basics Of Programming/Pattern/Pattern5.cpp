#include <iostream>
using namespace std;
int main()
{
    int i = 0, j = 0, k = 0;
    while (i < 5)
    {
        while (k <= 5 - i - 2)
        {
            cout << " ";
            k++;
        }
        k = 0;
        while (j < 2 * i - 1)
        {
            cout << "*";
            j++;
        }
        j = 0;
        i++;
        cout << endl;
    }
}