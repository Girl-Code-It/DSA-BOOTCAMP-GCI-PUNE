#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    for(int i=1;i<=n;i=i+2){
        for(int j=0;j<(n-i)/2;j++){
            cout<<"\t";
        }
        for(int j=0;j<i;j++){
            cout<<"*\t";
        }
        cout<<"\n";
    }
    
    for(int i=n-2;i>=1;i=i-2){
        for(int j=0;j<(n-i)/2;j++){
            cout<<"\t";
        }
        for(int j=0;j<i;j++){
            cout<<"*\t";
        }
        cout<<"\n";
    }
}