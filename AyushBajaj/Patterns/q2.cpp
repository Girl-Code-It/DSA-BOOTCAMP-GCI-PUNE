#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    
    for(int j = n; j>=1; j--){
    
        for(int i = 1; i <= j; i++){
            cout << "*\t";
        }
        cout << endl;
    }
    
    //write your code here
    
}
