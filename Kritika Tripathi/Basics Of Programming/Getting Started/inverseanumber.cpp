#include <iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    //write your code here
    int inv = 0, op=1;
    while(n>0){
        int od = n%10;//original digit
        int id = op;//inversedigit = original place
        int ip = od;//inverse place = original digit
        while(ip-1>0){
            id*=10;
            ip--;
        }
        inv = inv+id;
        n/=10;
        op++;
    }
    cout<<inv<<endl;
    return 0;    
}