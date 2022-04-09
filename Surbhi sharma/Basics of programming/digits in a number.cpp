#include <bits/stdc++.h>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    vector<int> v;
    while(n!=0){
        int x=n%10;
        v.push_back(x);
        n/=10;
    }
    
    for(int i=v.size()-1;i>=0;i--){
        cout<<v[i]<<endl;
    }
    
}
