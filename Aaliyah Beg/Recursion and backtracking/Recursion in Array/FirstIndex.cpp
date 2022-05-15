#include<bits/stdc++.h>
using namespace std;
int FirstIndex( int a[],int i,int n,int x){
    //base case
    if(a[i]==x) return i;
    if(i==n) return -1;
    //recursive case
    
    return FirstIndex(a,i+1,n-1,x);
}
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;cin>>x;
    cout<<FirstIndex(arr,0,n-1,x);
    return 0;
}