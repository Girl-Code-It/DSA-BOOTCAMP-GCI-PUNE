#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv){
    int num1, num2;
    cin >> num1 >> num2;

    //write your code here
    int gcd=__gcd(num1,num2);
    int lcm= (num1*num2)/gcd;
    cout<<gcd<<endl;
    cout<<lcm<<endl;
    
}
