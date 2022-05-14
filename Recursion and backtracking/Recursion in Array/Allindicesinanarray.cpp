#include<bits/stdc++.h>
using namespace std;
void AllIndex( int a[],int n,int x){
    //base case
    if(n==-1) return;
    //recursive case
    
    AllIndex(a,n-1,x);
    if(a[n]==x) cout<<n<<" ";
}
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;cin>>x;
    AllIndex(arr,n-1,x);
    return 0;
}