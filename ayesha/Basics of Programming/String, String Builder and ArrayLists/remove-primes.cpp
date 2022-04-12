#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void removeprimes(vector<int> v)
{
    // write your code here
    vector<int> arr;
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        if (!isPrime(v[i]))
        {
            arr.push_back(v[i]);
        }
    }
    cout << "[";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
        if (i < arr.size() - 1)
        {
            cout << ", ";
        }
        else
        {
            cout << "";
        }
    }
    cout << "]";
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    removeprimes(v);
}