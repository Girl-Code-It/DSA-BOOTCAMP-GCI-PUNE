#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    int inverted = 0;
    int originalPlace = 1;

    while (n>0) {
        int end = n % 10;
        int invertedDigit = originalPlace;
        int invertedPlace = end;

        inverted += invertedDigit * pow(10, invertedPlace - 1);
        n /= 10;
        originalPlace++;
    }
    cout << inverted << endl;
}