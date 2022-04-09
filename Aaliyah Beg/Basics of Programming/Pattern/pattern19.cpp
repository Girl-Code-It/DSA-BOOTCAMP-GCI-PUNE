#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;cin>>n;
    // first line
    for(int i=1;i<=n/2+1;i++) cout<<"*    ";
    for(int i=1;i<=n/2-1;i++) cout<<"     ";
    cout<<"*\n";
    for(int i=1;i<=n/2-1;i++){
        for(int j=1;j<=n/2;j++) cout<<"     ";
        cout<<"*    ";
        for(int j=1;j<=n/2-1;j++) cout<<"     ";
        cout<<"*\n";
    }
    // middle line
    for(int i=1;i<=n;i++) cout<<"*    ";
    cout<<"\n";
    for(int i=1;i<=n/2-1;i++){
        cout<<"*    ";
        for(int j=1;j<=n/2-1;j++) cout<<"     ";
        cout<<"*\n";
    }
    // last line
    cout<<"*    ";
    for(int i=1;i<=n/2-1;i++) cout<<"     ";
    for(int i=1;i<=n/2+1;i++) cout<<"*    ";
    cout<<"\n";
}
    

