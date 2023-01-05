#include <bits/stdc++.h>
using namespace std;
//print prime factors
// int main() {
//     int n;cin>>n;
//     bool isPrime[n];
//     for(int i=0;i<n;i++) isPrime[i]=true;
//     isPrime[1]=false;
//     isPrime[0]=false;
//     for(int i=2;i<n;i++){
//         if(isPrime[i]==true){
//             for(int j=2*i;j<n;j+=i){
//                 isPrime[j]=false;
//             }
//         }
//     }
//     for(int i=2;i*i<n;i++) {
//         if(n%i==0 and isPrime[i]){
//             cout<<i<<"\n";
//         }
//     }
//     return 0;
// }
//print prime factorization

//spf:smallest prime factor
int main(){
    int n;cin>>n;
    int spf[n+1];
    for(int i=2;i<=n;i++) spf[i]=-1;
    for(int i=2;i<=n;i++){
        if(spf[i]==-1){
            spf[i]=i;
            for(int j=i*i;j<=n;j+=i){
                if(spf[j]==-1) spf[j]=i;
            }
        }
    }
    while(n>1){
        cout<<spf[n]<<" ";
        n/=spf[n];
    }
}