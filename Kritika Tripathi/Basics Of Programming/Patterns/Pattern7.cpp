#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    //write your code here
    for(int i=1; i<=n; i++){
        for(int k=1; k<i; k++){
            cout<<"\t";
        }
        cout<<"*\t";
        cout<<endl;
    }
    return 0;
}