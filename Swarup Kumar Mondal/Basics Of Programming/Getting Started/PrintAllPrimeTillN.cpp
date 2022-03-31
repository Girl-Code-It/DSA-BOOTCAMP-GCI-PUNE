#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv){
    int low, high;
    cin >> low >> high;

    for(int i=low; i<=high; i++){
        int prime = 1;
        for(int j = 2; j*j <= i; j++){
            if(i%j==0){
                prime=0;
                break;
            }
        }
        if(prime)
            cout<<i<<"\n";
    }

}