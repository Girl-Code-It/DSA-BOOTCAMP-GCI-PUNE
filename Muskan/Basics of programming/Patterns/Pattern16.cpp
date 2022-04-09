#include <iostream>
using namespace std;
int main(int argc, char**argv){
    int n;
    cin >> n;
int stars=1;
int spaces=2*n-3;


 for(int i=1;i<=n;i++){
     for(int j=1;j<=stars;j++){
         cout<<j<<"\t";
         
     }
     for(int j=1;j<=spaces;j++){
         cout<<"\t";
         
     }
     if(i==n){
         stars--;
     }
     for(int j=stars;j>=1;j--){
         cout<<j<<"\t";
         
     }
     
     cout<<endl;
     stars++;
     spaces-=2;
 }
    
}
