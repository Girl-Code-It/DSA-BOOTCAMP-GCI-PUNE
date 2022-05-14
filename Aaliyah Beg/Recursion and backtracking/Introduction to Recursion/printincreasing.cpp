#include<bits/stdc++.h>
using namespace std;
void printincreasing(int n){
    //base case
    if(n==0) return;
    
    printincreasing(n-1);
    cout<<n<<"\n";
    return;
}
int main(){
    int n;cin>>n;
    printincreasing(n);
    return 0;
}