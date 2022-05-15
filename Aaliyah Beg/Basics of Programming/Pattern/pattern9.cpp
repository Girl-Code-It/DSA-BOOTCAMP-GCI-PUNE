#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;cin>>n;
    for(int i=n;i>0;){
        for(int j=1;j<=n-i;j++) cout<<"    ";
        cout<<"*   ";
        for(int j=1;j<=i;j++) cout<<"    ";
        for(int j=1;j<=i;j++) cout<<"    ";
        cout<<"*   ";
        i-=2;
        cout<<"\n";
    }
    int k=n/2 +1;
    for(int i=1;i<=k;i++) cout<<"    ";
    cout<<"*\n";
    for(int i=1;i<=n;){
        for(int j=1;j<=n-i;j++) cout<<"    ";
        cout<<"*   ";
        for(int j=1;j<=i;j++) cout<<"    ";
        for(int j=1;j<=i;j++) cout<<"    ";
        cout<<"*   ";
        i+=2;
        cout<<"\n";
    }
}