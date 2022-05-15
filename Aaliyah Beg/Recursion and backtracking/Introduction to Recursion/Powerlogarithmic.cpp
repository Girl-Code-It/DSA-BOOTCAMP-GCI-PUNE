#include<bits/stdc++.h>
using namespace std;
int powerlogrithmic(int x,int n){
    //base case
    if(n==0) return 1;
    //recursive case
    if(n%2==0)
    return x*x*powerlogrithmic(x,n/2-1)*powerlogrithmic(x,n/2-1);
    else
    return x*powerlogrithmic(x,n/2)*powerlogrithmic(x,n/2);
}
int main(){
    int x;cin>>x;
    int n;cin>>n;
    cout<<powerlogrithmic(x,n);
    return 0;
}