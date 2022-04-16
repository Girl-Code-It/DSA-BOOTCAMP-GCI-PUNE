#include <iostream>
#include<cmath>
using namespace std;

int counting(int n){
    int count = 0;
    while (n) {
        count++;
        n /= 10;
    }
    return count;
}

int main(){
    int n,k;
    cin>>n>>k;
    
    //write your code here
    int digits = counting(n);
    
    k = k % digits;
    if (k < 0) {
        k += digits;
    }
    
    for (int i=0; i<k; i++) {
        int end = n % 10;
        n /= 10;
        n = end*pow(10,digits-1) + n;
    }
    cout << n << endl;
    
}