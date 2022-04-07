// This will be your code
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int num=n;
    int d=1;
    int c=0;
    while(num){
        c++;
        num/=10;
        d*=10;


    }
    d/=10;
    while(n){
        int t=n/d;
        cout<<t<<"\n";
        n=n-t*d;
        d/=10;
    }
    return 0;
}