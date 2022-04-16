#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    int s = (n-1)/2;
    for (int i=0; i<=s; i++) {
        for (int j=0; j<s-i; j++) {
            cout << "\t";
        }
        for (int k=1; k<=2*i+1; k++) {
            cout << "*" << "\t";
        }
        cout << endl;
    }
    
    for (int i=s; i>0; i--) {
        for (int j=s-i+1; j>0; j--) {
            cout << "\t";
        }
        for (int k=2*i-1; k>0; k--) {
            cout << "*" << "\t";
        }
        cout << endl;
    }
}