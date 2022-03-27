#include <iostream>
using namespace std;

int main(){
    int n=5,j;
    int scale = n/2+1;

    //write your code here
    for(int i=1; i<=scale; i++){
        for(j=1; j<=scale+1-i; j++){
            cout<<"*"<<"\t";
        }
        for(; j<=scale+i; j++){
            cout<<"\t";
        }
        for(;j<=2*scale+1;j++){
            cout<<"*\t";
        }
        cout<<endl;
    }
    for(int i=n; i>scale; i--){
        for(j=1; j<=scale+1-(i-scale); j++){
            cout<<"*"<<"\t";
        }
        for(; j<=i; j++){
            cout<<"\t";
        }
        for(;j<=2*scale+1;j++){
            cout<<"*\t";
        }
        cout<<endl;
    }
    return 0;
}