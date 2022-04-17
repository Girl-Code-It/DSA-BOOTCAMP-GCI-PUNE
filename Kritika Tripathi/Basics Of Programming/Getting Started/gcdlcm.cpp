#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    cin >> num1 >> num2;

    //write your code here
    int gcd;
    int n = min(num1, num2);
    for(int i=1; i<=n; i++){
        if(num1%i==0 && num2%i==0){
            gcd=i;
        }
    }
    int lcm=(num1*num2)/gcd;

    cout<<"GCD: "<<gcd<<endl;
    cout<<"LCM: "<<lcm<<endl;
    return 0;
}