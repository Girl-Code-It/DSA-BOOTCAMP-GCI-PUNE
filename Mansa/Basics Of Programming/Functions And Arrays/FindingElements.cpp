#include <iostream>
using namespace std;
int main()
{
    int i, n, a[100], ele, pos;
    cout << "Number of elements: " << endl;
    cin >> n;
    cout << "Elements: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the element to be found: " << endl;
    cin >> ele;
    for (i = 0; i < n; i++)
    {
        if (a[i] == ele)
            cout << "Element found at index " << i << endl;
        else
        {
            cout << "-1" << endl;
        }
    }
}