#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    //write your code here
    for (int i=1; i<=n; i++) {
        for (int j=n-i; j>0; j--){
            cout << "\t";
        }
        for (int k=0; k<i; k++) {
            cout << "*" << "\t";
        }
        cout << endl;
    }
    
}

