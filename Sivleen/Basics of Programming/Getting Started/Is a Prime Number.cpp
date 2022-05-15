#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int prime =1;
        for(int i=2; i*i <= n; i++){
            if(n%i==0)
            {
                cout<<"not prime\n";
                prime = 0;
                break;
            }
        }
        if(prime)
            cout<<"prime\n";
    }


}