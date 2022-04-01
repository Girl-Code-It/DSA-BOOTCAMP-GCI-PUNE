
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    //count digits first
    int countOfDigits = floor(log10(n)+1);
    int div = pow(10,countOfDigits-1);

    while(div > 0){

        int digit = n/div;
        cout << digit << endl;
        n = n % div;

        div /= 10;
    }

}
