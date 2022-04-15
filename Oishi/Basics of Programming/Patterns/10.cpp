#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    int s = (n-1)/2;
    for (int i=s; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i == j || i+j == n-1) {
                cout << "*" << "\t";
            }
            else {
                cout << "\t";
            }
        }
        cout << endl;
    }
    
    s = (n+1)/2;
    for (int i=1; i<s; i++) {
        for (int j=0; j<n; j++) {
            if (i == j || i+j == n-1) {
                cout << "*" << "\t";
            }
            else {
                cout << "\t";
            }
        }
        cout << endl;
    }
}
