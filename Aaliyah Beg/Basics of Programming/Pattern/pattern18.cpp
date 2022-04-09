#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;cin>>n;
    for(int i=0;i<n;i++){
        cout<<"*    ";
    }
    cout<<"\n";
    int k=1;
    for(int i=n-4;i>-2;i-=2){
        for(int j=1;j<=k;j++) cout<<"     ";
        cout<<"*    ";
        for(int j=1;j<=i;j++) cout<<"     ";
        if(i!=-1) cout<<"*    ";
        cout<<"\n";
        k++;
    }
    k=(n/2)-1;
    for(int i=3;i<=n;i+=2){
        for(int j=1;j<=k;j++) cout<<"     ";
        for(int j=1;j<=i;j++) cout<<"*    ";
      
        cout<<"\n";
        k--;
    }
    
}