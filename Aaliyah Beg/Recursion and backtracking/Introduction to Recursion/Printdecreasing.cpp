#include<bits/stdc++.h>
using namespace std;
void printdecreasing(int n){
    //base case
    if(n==0) return;
    cout<<n<<"\n";
    printdecreasing(n-1);
    return;
}
int main(){
    int n;cin>>n;
    printdecreasing(n);
    return 0;
}