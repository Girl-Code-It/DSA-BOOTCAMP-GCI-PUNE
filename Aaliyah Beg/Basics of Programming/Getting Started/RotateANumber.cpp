#include <bits/stdc++.h>
using namespace std;
int main() {
    int k;
    string n;
    cin>>n>>k;
    int k_new=abs(k)%n.length();
    if(k_new<0){
        cout<<n.substr(k_new-1)+n.substr(0,k_new-1);
    }
    else if(k_new>0){
        cout<<n.substr(n.length()- k_new + 1)+n.substr(0,n.length()- k_new + 1);
    }
    else{
        cout<<n;
    }
}