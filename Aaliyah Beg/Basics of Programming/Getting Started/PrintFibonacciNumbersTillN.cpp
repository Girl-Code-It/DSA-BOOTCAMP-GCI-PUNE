#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;cin>>n;
    int a=0;
    int b=1;
    int c=0;
    for(int i=1;i<=n;i++){
        cout<<a<<"\n";
        c=a;
        a=b;
        b=c+b;
    }
}