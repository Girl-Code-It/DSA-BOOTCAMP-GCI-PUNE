#include <iostream>
using namespace std;
int main(int agrc, char**argv){
    int n;
    cin >> n;

    //write your code here
    int st = 1;
    int mid = (n+1)/2;
    for (int i=1; i<=n; i++) {
        if (i==1) {
            for (int k=1; k<=n;k++) {
                cout << "*\t";
            }
        }
        for (int j=1; j<=n; j++) {
            
            if ((i != 1)&& (i<=n/2) && (i == j || i+j == n+1)) {
                cout << "*\t";
            }
            else if (i>n/2 && j==mid) {
                for (int k=0; k<st; k++) {
                    cout <<"*\t";
                }
                st += 2;
                mid--;
            }
            else cout << "\t";
        }
        cout << endl;
    }
}