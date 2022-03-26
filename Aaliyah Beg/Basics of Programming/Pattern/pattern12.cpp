#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;cin>>n;
    int fib=0;
    int a=0;
    int b=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<fib<<"    ";
            a=b;
            b=fib;
            fib=a+b;
            
        }
        
        cout<<"\n";
    }
}