#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;cin>>n;
    bool isPrime[n];
    for(int i=0;i<n;i++) isPrime[i]=true;
    isPrime[1]=false;
    isPrime[0]=false;
    for(int i=2;i<n;i++){
        if(isPrime[i]==true){
            for(int j=2*i;j<n;j+=i){
                isPrime[j]=false;
            }
        }
    }
    for(int i=0;i<n;i++) { 
        if(isPrime[i]==true) 
        cout<<i<<"\n";
    }
    return 0;
}