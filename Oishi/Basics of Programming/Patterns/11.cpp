#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    //write your code here
    int count = 1;
    for (int i=1; i<=n; i++) {
        for (int j=0; j<i; j++) {
            cout << count++ << "\t";
        }
        cout << endl;
    }
}