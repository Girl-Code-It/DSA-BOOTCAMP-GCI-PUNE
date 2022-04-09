#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    int index = 1;
    int rev = 0;
    while(n > 0){
    
        int digit = n%10;
        n = n / 10;
        rev += (index * pow(10,digit-1));
        index++;
    }
    
    cout << rev;
}
