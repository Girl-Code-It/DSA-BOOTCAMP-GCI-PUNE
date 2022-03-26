#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    while(n>0){
        cout<< n%10<<"\n";
        n=n/10;
    }
    
}