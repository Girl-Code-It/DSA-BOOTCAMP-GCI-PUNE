#include<bits/stdc++.h>
using namespace std;
void displayarrayinrevorder( int a[],int n){
    //base case
    if(n==-1) return;
    //recursive case
    cout<<a[n]<<" ";
    displayarrayinrevorder(a,n-1);
}
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    displayarrayinrevorder(arr,n-1);
    return 0;
}