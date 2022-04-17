#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    //write your code here
    for(int i=1; i<=n; i++){
        for(int k=1; k<=n-i; k++){
            cout<<"\t";
        }
        for(int j=1; j<=i; j++){
            cout<<"*"<<"\t";
        }
        cout<<endl;
    }
    
}