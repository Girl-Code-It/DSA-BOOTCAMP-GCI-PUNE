#include <iostream>
using namespace std;
int main(int agrc, char**argv){
    int n;
    cin >> n;

    int spaces=0;
    int stars=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
        if(i==1){
            if(j<=n/2+1||j==n){
            cout<<"*\t";}
            else{
               cout<<"\t"; 
            }
        }
        else if(i>1&&i<n/2+1){
        if(j==n/2+1||j==n){
             cout<<"*\t";
        }
        else{
               cout<<"\t"; 
            }
        }
        else if(i==n/2+1){
            cout<<"*\t";
            
        }
        else if(i>=n/2&&i<n){
        if(j==1||j==n/2+1){
               cout<<"*\t"; 
        }
        else{
               cout<<"\t"; 
            }
        }
        else if(i==n){
        if(j==1||j>n/2){
                cout<<"*\t";
            
        }
        else{
               cout<<"\t"; 
            }
        }
        }
        cout<<endl;
    }
    
}
    
