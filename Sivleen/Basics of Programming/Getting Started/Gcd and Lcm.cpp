#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int num1, num2;
    cin >> num1 >> num2;
    int a=num1,b=num2;
    while(num1%num2!=0){
        int temp = num1%num2;
        num1=num2;
        num2=temp;
    }
    cout<<num2<<"\n";
    cout<< (a*b)/num2<<"\n";
}