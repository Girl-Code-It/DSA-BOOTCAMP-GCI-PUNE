#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    int stars = 1;
    int spaces = n / 2;
    int x = 1;
    // write your code here
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= spaces; j++)
        {
            cout << "\t";
        }
        int col_value = x;
        for (int j = 1; j <= stars; j++)
        {
            cout << col_value << "\t";
            if (j <= stars / 2)
            {
                col_value++;
            }
            else
            {
                col_value--;
            }
        }
        if (i <= n / 2)
        {
            spaces--;
            stars += 2;
            x++;
        }
        else
        {
            spaces++;
            stars -= 2;
            x--;
        }
        cout << "\n";
    }
    return 0;
}