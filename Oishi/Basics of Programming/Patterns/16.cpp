#include <iostream>
using namespace std;
int main(int argc, char**argv){
    int n;
    cin >> n;

    //write your code here
    int space = 2*n-3;
    int start = 1;
    
    for (int i=1; i<=n; i++) {
        int val = 1;
        for (int j=1; j<=start; j++){
            cout << val << "\t";
            val++;
        }
        for (int j=1; j<=space; j++){
            cout << "\t";
        }
        if (i == n) {
            start--;
            val--;
        }
        for (int j=1; j<=start; j++) {
            val--;
            cout << val << "\t";
        }
        start++;
        space -= 2;
        cout << endl;
    }
}