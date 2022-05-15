#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;cin>>n;
    for(int j=1;j<=n/2;j++){
        cout<<"*    ";
        for(int i=1;i<=n-2;i++){
            cout<<"     ";
        }
        cout<<"*    ";
        cout<<"\n";
    }
    
    int l=1;
    int m=1;
     for(int j=1;j<=n/2;j++){
        cout<<"*    ";
        for(int i=1;i<=n/2-l;i++){
            cout<<"     ";
        }
        
        if(j!=1){
            cout<<"*    ";
            for(int i=1;i<=m;i++){
                cout<<"     ";
            }
            m+=2;
        }
        cout<<"*    ";
        for(int i=1;i<=n/2-l;i++){
            cout<<"     ";
        }
        cout<<"*    ";
        l++;
        
        cout<<"\n";
    }
    cout<<"*    ";
    for(int i=1;i<=n-2;i++) cout<<"     ";
    cout<<"*    ";
}