
#include <iostream>
using namespace std;

int main(){
    int n=5,j;
    int scale = n/2 +1;

    //write your code here
    for(int i=1; i<=scale; i++){
        for(int k=1; k<=scale-i; k++){
            cout<<"\t";
        }
        for(j=1; j<=i; j++){
            cout<<"*"<<"\t";
        }
        for(;j<=2*i-1; j++){
            cout<<"*"<<"\t";
        }
        cout<<endl;
    }
    for(int i=n; i>scale; i--){
        for(int k=1; k<=scale-(i-scale); k++){
            cout<<"\t";
        }
        for(j=1; j<=(i-scale); j++){
            cout<<"*"<<"\t";
        }
        for(;j<=2*(i-scale)-1; j++){
            cout<<"*"<<"\t";
        }
        cout<<endl;
    }

    cout<<endl;
}
