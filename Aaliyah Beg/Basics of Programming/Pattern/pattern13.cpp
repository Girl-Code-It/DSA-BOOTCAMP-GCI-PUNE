#include <bits/stdc++.h>
using namespace std;
int c(int i,int j){
    int prod1=1;
    int prod2=1;
    int prod3=1;
    for(int a=1;a<=i;a++) prod1*=a;
    for(int a=1;a<=j;a++) prod2*=a;
    for(int a=1;a<=i-j;a++) prod3*=a;
    int prod4=prod2*prod3;
    int ans=prod1/prod4;
    return ans;
}
int main() {
    int n;cin>>n;
     for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<c(i,j)<<"    ";
            
        }
        
        cout<<"\n";
    }
}