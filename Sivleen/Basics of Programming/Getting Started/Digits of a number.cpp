#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    int reverse = 0;
    while(n>0){
        reverse = reverse *10 + n%10;
        n=n/10;
    }
    
    while(reverse>0){
        cout<<reverse%10<<"\n";
        reverse = reverse/10;
    }
    
}