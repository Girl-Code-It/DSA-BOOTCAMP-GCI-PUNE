#include <bits/stdc++.h>
using namespace std;
int main() {
    int k;
    string n;
    cin>>n>>k;
    int k_new=abs(k)%n.length();
    if(k<0){
        cout<<n.substr(k_new)+n.substr(0,k_new);
    }
    else if(k>0){
        cout<<n.substr(n.length()- k_new )+n.substr(0,n.length()- k_new );
    }
    else{
        cout<<n;
    }
}