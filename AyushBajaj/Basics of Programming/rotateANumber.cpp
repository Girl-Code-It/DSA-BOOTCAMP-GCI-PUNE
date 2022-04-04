#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    
    //write your code here
    
    //Step 1: Deduce min k
    int nod = log10(n) + 1;
    k = k % nod;
    //cout << "k is " << k << endl;

    int divisor = 1;
    int multiplier = 1;
    if(k >= 0) 
    {
        //Right rotation logic
        divisor = pow(10,k);
        multiplier = pow(10,nod-k);
    }
    else if(k < 0){
        //Left rotation logic
        k = -k;
        divisor = pow(10,nod-k);
        multiplier = pow(10,k);
    }
    
    int rem = n % divisor;
    int quo = n / divisor;
    int result = (rem * multiplier) + quo;
    cout << result << endl;
}
