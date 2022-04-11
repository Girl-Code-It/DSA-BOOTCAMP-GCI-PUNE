#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=6-i)
            cout<<"*\t";
            
            else
            cout<<" ";
        }
        cout<<"\n";
    }
    //write your code here
    return 0;
}