#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int scale = n/2+1;
    int j;
    //write your code here
    for(int i=1; i<=scale; i++){
        for(int k=1; k<=scale-i; k++){
            cout<<"\t";
        }
        int l = i;
        for(j=1; j<=i; j++,l++){
            cout<<l<<"\t";
        }
        l=2*i-2;
        for(; j<=2*i-1; j++,l--){
            cout<<l<<"\t";
        }
        cout<<endl;
    }
    for(int i=n; i>scale; i--){
        for(int k=1; k<=2*scale-i; k++){
            cout<<"\t";
        }
        int l = i-scale;
        for(j=1; j<=i-scale; j++,l++){
            cout<<l<<"\t";
        }
        l=2*(i-scale)-2;
        for(; j<=2*(i-scale)-1; j++,l--){
            cout<<l<<"\t";
        }
        cout<<endl;
    }
    
}