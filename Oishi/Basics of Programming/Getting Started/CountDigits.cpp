#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    //write your code here
    int count = 0;
    while (n){
        count++;
        n /= 10;
    }
    cout << count << endl;
}