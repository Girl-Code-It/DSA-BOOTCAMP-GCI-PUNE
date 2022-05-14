#include<bits/stdc++.h>
using namespace std;
void toh(int n,int a,int b,int c){
    //base case
    if(n==0) return;
    //recursive case
    toh(n-1,a,c,b);
    cout<<n<<"["<<a<<"->"<<b<<"] \n";
    toh(n-1,c,b,a);
    return;

}
int main(){
    int n;cin>>n;
    int a;cin>>a;
    int b;cin>>b;
    int c;cin>>c;
    toh(n,a,b,c);
    return 0;
}