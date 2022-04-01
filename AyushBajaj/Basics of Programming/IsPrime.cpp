#include <bits/stdc++.h>
using namespace std;

bool IsPrime(int& n){
    
    for(int div = 2; div <= sqrt(n); div++){
        if(n % div == 0){
            return false;
        }
    }
    
    return true;
    
}

int main(int argc, char **argv){
    int t;
    cin >> t;

    //write your code here
    int n;
    while(t--){
        cin >> n;
        if(IsPrime(n))
            cout << "prime" << endl;
        else
            cout << "not prime" << endl;
    }
    
}
