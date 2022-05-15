#include<bits/stdc++.h>
using namespace std;
int LastIndex( int a[],int n,int x){
    //base case
    if(a[n]==x) return n;
    if(n==-1) return -1;
    //recursive case
    
    return LastIndex(a,n-1,x);
}
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;cin>>x;
    cout<<LastIndex(arr,n-1,x);
    return 0;
}