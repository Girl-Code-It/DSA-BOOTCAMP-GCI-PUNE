#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // write your code here
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int ans = arr[n-1] - arr[0];
    cout << ans;
}