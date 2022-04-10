#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    //write your code here
    int cnt=0;
    while(n!=0){
        cnt++;
        n/=10;
    }
    cout<<cnt<<endl;
}
