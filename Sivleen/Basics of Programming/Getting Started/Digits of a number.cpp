#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    int count = 0,orgNum=n;
    while(n>0){
        n=n/10;
        count++;
    }
    
    while(count>0){
        int power=static_cast<int>(pow(10,count-1));
        cout<<orgNum/power<<"\n";
        count--;
        orgNum = orgNum%power;
    }
    
}
