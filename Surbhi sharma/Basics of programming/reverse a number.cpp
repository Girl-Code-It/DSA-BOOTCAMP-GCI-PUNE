#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    while(n!=0){
        cout<<n%10<<endl;
        n/=10;
    }
    
}
