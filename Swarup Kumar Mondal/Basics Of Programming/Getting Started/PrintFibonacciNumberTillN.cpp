#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    
    int a=0, b=1;
    while(n--){
        int temp = a+b;
        cout<<a<<"\n";
        a=b;
        b=temp;
    }
    
}