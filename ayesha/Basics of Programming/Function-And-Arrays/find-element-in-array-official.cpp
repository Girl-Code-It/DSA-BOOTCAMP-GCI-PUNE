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
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int d;
    cin>>d;
    for (i = 0; i < n; i++)
    {
        if(arr[i]==d){
            break;
        }
    }
    if(i<n){
        cout<<i;
    }
    else{
        cout<<"-1";
    }
}