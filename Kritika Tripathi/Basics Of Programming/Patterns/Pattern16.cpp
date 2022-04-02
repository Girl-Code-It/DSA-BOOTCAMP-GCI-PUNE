#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int j,l;
    //write your code here
    for(int i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            cout<<j<<"\t";
        }
        for(;j<=i+2*(n-i)-1; j++){
            cout<<"\t";
        }
        if(i==n){ 
            l=i-1;
        }
        else l=i;
        for(;j<=2*n-1; j++,l--){
            cout<<l<<"\t";
        }
        cout<<endl;
    }
    
}