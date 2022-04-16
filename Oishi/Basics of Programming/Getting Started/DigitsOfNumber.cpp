#include <iostream>
using namespace std;

int digit(int n) {
    int count=0;
    while(n) {
        count++;
        n /= 10;
    }
    return count;
}

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    int d = digit(n);
    
    int digits[d];
    int i=0;
    while(n) {
        int end = n % 10;
        digits[i] = end;
        n /= 10;
        i++;
    }
    
    for(int j=d-1; j>=0; j--) {
        cout << digits[j] << endl;
    }
}