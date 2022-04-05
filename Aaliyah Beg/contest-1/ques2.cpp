#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;cin>>n;
    int gaps=2*(n-2)+1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++)cout<<" ";
        cout<<i;
        for(int j=1;j<=gaps;j++)cout<<" ";
        if(i!=n) cout<<i;
        gaps-=2;
        cout<<"\n";
    }
    gaps=1;
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<i;j++)cout<<" ";
        cout<<i;
        for(int j=1;j<=gaps;j++)cout<<" ";
        cout<<i;
        gaps+=2;
        cout<<"\n";
    }
    return 0;
}
