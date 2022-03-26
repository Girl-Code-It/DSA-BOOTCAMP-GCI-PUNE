// This will be your code
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    for(int i=0;i<n;i++) cout<<"*";
    cout<<"\n";
    n-=2;
    int c=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-c;j++ ) cout<<" ";
        cout<<"*";
        c++;
        cout<<"\n";
    }
    for(int i=0;i<n+2;i++) cout<<"*";
    return 0;
}