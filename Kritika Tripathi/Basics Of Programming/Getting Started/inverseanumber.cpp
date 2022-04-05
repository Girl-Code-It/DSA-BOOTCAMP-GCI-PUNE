#include <iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    //write your code here
    int inv = 0, op=1;
    while(n>0){
        int od = n%10;
        int id = op;
        int ip = od;
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