#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    //write your code here
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j==i || j==n+1-i){
                cout<<"*\t";
            }
            else{
                cout<<"\t";
            }
        }
        cout<<endl;
    }

}