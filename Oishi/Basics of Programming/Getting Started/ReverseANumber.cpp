#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    while(n) {
        cout << n%10 << endl;
        n /= 10;
    }
}