#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    //write your code here
    int temp = n, remainder, reverse=0;
    while(temp!=0){
        remainder=temp%10;
        reverse=reverse*10+remainder;
        temp/=10;
    }
    while(reverse!=0){
        remainder = reverse%10;
        cout<<remainder<<endl;
        reverse/=10;
    }
    return 0;
}