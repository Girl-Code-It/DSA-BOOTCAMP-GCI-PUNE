#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int first = 0;
    int second = 1;
    int add;
    
    //write your code here
    for(int i=1; i<5; i++){
        for(int j=1; j<=i; j++){
            cout<<first<<"\t";
            add = first + second;
            first = second;
            second = add;
        }
        cout<<endl;
    }
    
}