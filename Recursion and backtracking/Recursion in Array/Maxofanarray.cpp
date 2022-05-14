#include<bits/stdc++.h>
using namespace std;
int m=INT_MIN;
int Maxofanarray( int a[],int n){
    // int m=INT_MIN;
    //base case
    if(n==-1) return m;
    //recursive case
    if(a[n]>m) m=a[n];
    return Maxofanarray(a,n-1);
}
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<Maxofanarray(arr,n-1);
    return 0;
}