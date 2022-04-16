#include <iostream>
using namespace std;
int main(int agrc, char**argv){
    int n;
    cin >> n;

    //write your code here
    int s = (n+1)/2;
    for (int i=1; i<=s; i++) {
        if (i != s) {
            for (int j=1; j<s; j++) {
                cout << "\t";
            }
        }
        else if (i == s) {
            for (int j=1; j<s; j++) {
                cout << "*" << "\t";
            }
        }
        
        for (int j=0; j<i; j++) {
            cout << "*" << "\t";
        }
        cout << endl;
    }
    
    for (int i=1; i<s; i++) {
        for (int j=1; j<s; j++) {
            cout << "\t";
        }
        for (int j=0; j<s-i; j++) {
            cout << "*" << "\t";
        }
        cout << endl;
    }
}