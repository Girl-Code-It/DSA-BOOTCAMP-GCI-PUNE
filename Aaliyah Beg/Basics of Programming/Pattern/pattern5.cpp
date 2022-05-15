#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;cin>>n;
    int k=n/2;
    for(int i=1;i<=n;){
        for(int j=1;j<=k;j++){
             cout<<"     ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*    ";
        }
        i+=2;
        k--;
        cout<<endl;
    }
    k=1;
    for(int i=n-2;i>0;){
        for(int j=1;j<=k;j++){
             cout<<"     ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*    ";
        }
        i-=2;
        k++;
        cout<<endl;
    }

}