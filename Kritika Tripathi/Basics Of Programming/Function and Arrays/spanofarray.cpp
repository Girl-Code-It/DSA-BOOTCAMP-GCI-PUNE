#include<bits/stdc++.h>
using namespace std;

int main(){
    //write your code here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int maxn = INT_MIN;
    int minn = INT_MAX;
    for(int i=0; i<n; i++){
        maxn = max(arr[i], maxn);
        minn = min(arr[i], minn);
    }
    int ans = maxn - minn;
    cout<<ans<<endl;

    return 0;
}