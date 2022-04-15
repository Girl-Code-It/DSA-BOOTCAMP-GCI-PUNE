#include <iostream>
using namespace std;
int main(int argc, char**argv){
    int n;
    cin >> n;

    //write your code here
    int s = (n-1)/2;
    
    for (int i=0; i<=s; i++) {
        int temp = i+1;
        for (int j=i; j<s; j++) {
            cout << "\t";
        }
        for (int k=1; k<=2*i+1; k++) {
            if (k<=i) {
                cout << temp++ << "\t";
            }
            else {
                cout << temp-- << "\t";
            }
        }
        cout << endl;
    }
    
    for (int i=s; i>0; i--) {
        int temp = i;
        for (int j=s-i+1; j>0; j--) {
            cout << "\t";
        }
        for (int k=1; k<=2*i-1; k++) {
            if (k<=(i+1)/2) {
                cout << temp++ << "\t";
            }
            else {
                cout << temp-- << "\t";
            }
        }
        cout << endl;
    }
}