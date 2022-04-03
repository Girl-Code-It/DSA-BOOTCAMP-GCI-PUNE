#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    //write your code here
    int d = 0, temp = n;
    while(temp!=0){
        d++;
        temp/=10;
    }
    cout<<d<<endl;
    
}