#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    while(n>0){
        
        int digit = n%10;
        cout << digit << endl;
        n = n/10;
        
    }
}
