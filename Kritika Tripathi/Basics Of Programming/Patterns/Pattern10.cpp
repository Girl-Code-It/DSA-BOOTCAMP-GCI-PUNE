#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int scale = n/2+1;
    //write your code here
    for(int i=1; i<=scale; i++){
        for(int j=1; j<=n; j++){
            if(j==(scale-i+1) || j==(scale+i-1)){
                cout<<"*\t"; 
            }

            else{
                cout<<"\t";
            }
        }
        cout<<endl;
    }
    for(int i=n; i>scale; i--){
        for(int j=1; j<=n; j++){
            if(j==(2*scale-i+1) || j==(i-1)){
                cout<<"*\t"; 
            }

            else{
                cout<<"\t";
            }
        }
        cout<<endl;
    }
    
}