#include <iostream>
using namespace std;
int main(int agrc, char**argv){
    int n;
    cin >> n;

  int spaces=n/2;
  int stars=1;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=spaces;j++){
        if(i!=n/2+1)
        {cout<<"\t";}
        else{
             cout<<"*\t";
            
        }
    }
     for(int j=1;j<=stars;j++){
        cout<<"*\t";
    }
    if(i<=n/2){
        stars++;
        
    }
    else{
        stars--;
    }
    cout<<endl;
  }
    
}
