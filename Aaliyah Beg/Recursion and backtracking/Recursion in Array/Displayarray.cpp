#include<bits/stdc++.h>
using namespace std;
void displayarray( int a[],int i,int n){
    //base case
    if(i==n) return;
    //recursive case
    cout<<a[i]<<" ";
    displayarray(a,i+1,n);
}
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    displayarray(arr,0,n);
    return 0;
}