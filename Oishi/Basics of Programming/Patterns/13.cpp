#include <iostream>
using namespace std;

int factorial(int x) {
    int result = 1;
    for (int i=1; i<=x; i++)
        result *= i;
    
    return result;
}

int combination (int i, int j) {
    return factorial(i)/(factorial(j) * factorial(i-j));
}

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    //write your code here
    for (int i=0; i<n; i++) {
        for (int j=0; j<=i; j++) {
            cout << combination(i, j) << "\t";
        }
        cout << endl;
    }
}
