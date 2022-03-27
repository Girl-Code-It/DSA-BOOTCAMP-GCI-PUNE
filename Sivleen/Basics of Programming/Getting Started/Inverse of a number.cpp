#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int inverse=0, count=1;
    while(n>0){
        int temp = n%10;
        inverse = (count*pow(10,temp-1))+ inverse; 
        count++;
        n=n/10;
    }
    cout<<inverse<<"\n";   
}