// This will be your code
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;cin>>a>>b;
    int lcm;
    int gcd;
    int large=((a>b)? a:b);
    int small=((a<b)? a:b);
    for(int i=large;i<=a*b;i++){
        if(i%a ==0 && i%b ==0) {
            lcm=i;
            break;
        }
    }
    cout<<lcm<<"\n";
    for(int i=small;i>=1;i--){
        if(a%i ==0 && b%i ==0) {
            gcd=i; 
            break;
        }
    }
    cout<<gcd<<"\n";
    return 0;
}