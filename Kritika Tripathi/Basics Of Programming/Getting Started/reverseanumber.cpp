#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    //write your code here
    int rem, temp = n;
    while(temp!=0){
        rem = temp%10;
        cout<<rem<<endl;
        temp/=10;
    }
    return 0;
}