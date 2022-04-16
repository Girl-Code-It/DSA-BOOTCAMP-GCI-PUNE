#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    //write your code here
    int first = 0;
    int second = 1;
    
    for (int i=1; i<=n; i++) {
        for (int j=0; j<i; j++) {
            cout << first << "\t";
            int temp = first;
            first = second;
            second = temp + second;
            
        }
        cout << endl;
    }
}

