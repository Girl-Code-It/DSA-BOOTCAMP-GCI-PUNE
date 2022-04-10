#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    int nn=n;
    int a[10];
    int i=0;
    while(nn!=0){
        int x=nn%10;
        
            a[x]=i+1;
        
        i++;
        nn/=10;
    }
    vector<int> v;
    while(n!=0){
        int x=n%10;
        v.push_back(a[a[x]]);
        n/=10;
    }
    for(int i=v.size()-1;i>=0;i--){
        cout<<v[i];
    }
    
    
}
