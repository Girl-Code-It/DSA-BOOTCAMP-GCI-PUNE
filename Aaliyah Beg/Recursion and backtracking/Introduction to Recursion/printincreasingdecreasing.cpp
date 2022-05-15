#include<bits/stdc++.h>
using namespace std;
void printincreasingdecreasing(int n){
    //base case
    if(n==0) return;
    cout<<n<<"\n";
    printincreasingdecreasing(n-1);
    cout<<n<<"\n";
    return;
}
int main(){
    int n;cin>>n;
    printincreasingdecreasing(n);
    return 0;
}