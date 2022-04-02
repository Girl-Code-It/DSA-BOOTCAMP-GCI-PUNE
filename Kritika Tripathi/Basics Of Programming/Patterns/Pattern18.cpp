#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int scale = n/2+1;
    //write your code 
    for(int i=1; i<=scale; i++){
        for(int k=1; k<=i-1; k++){
            cout<<"\t";
        }
        for(int j=1; j<=n-2*(i-1); j++){
            if(j==1 || j==n-2*(i-1) || i==1){
                cout<<"*\t";
            }
            else{
                cout<<"\t";
            }
        }
        cout<<endl;
    }
    for(int i=n; i>scale; i--){
        int l = i-scale;
        for(int k=1; k<=l-1; k++){
            cout<<"\t";
        }
        for(int j=1; j<=n-2*(l-1); j++){
            if(j>=1 || j<=n-2*(l-1) || l>=1){
                cout<<"*\t";
            }
            else{
                cout<<"\t";
            }
        }
        cout<<endl;
    }
}