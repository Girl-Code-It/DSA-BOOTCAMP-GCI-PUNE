#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count=1;
    //write your code here
    for(int i=1; i<n; i++){
        for(int j=1; j<=i; j++, count++){
            cout<<count<<"\t";
        }
        cout<<endl;
    }
    
}