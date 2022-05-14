#include<bits/stdc++.h>
using namespace std;
int powerlinear(int x,int n){
    //base case
    if(n==0) return 1;
    return x* powerlinear(x,n-1);
}
int main(){
    int x;cin>>x;
    int n;cin>>n;
    cout<<powerlinear(x,n);
    return 0;
}