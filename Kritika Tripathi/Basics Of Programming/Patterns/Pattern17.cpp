#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    //write your code here
    for(int i=1; i<=n/2+1;i++){
        if(i<=n/2){
            for(int k=1; k<=n/2; k++){
                cout<<"\t";
            }
            for(int j=1; j<=i; j++){
                cout<<"*\t";
            }
        }
        if(i==n/2+1){
            for(int j=1; j<=n; j++){
                cout<<"*\t";
            }
        }
        cout<<endl;
    }
    for(int i=n; i>n/2+1; i--){
        for(int k=1; k<=n/2; k++){
                cout<<"\t";
            }
            for(int j=1; j<=i-n/2-1; j++){
                cout<<"*\t";
            }
            cout<<endl;
    }

    
}