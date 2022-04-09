#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c;cin>>a>>b>>c;
    if(a>b and a>c){
        if(a*a==b*b+c*c) cout<<"true";
        else cout<<"false";
    }
    else if(b>c and b>a){
        if(b*b==a*a+c*c) cout<<"true";
        else cout<<"false";
    }
    else if(c>a and c>b){
        if(c*c==a*a+b*b) cout<<"true";
        else cout<<"false";
    }
    return 0;
}