#include <iostream>
using namespace std;


int fibonicci(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fibonicci(n-1)+fibonicci(n-2);
    }
}
int main(int argc, char **argv)
{
    int n;
    cin >> n;
    
    
    for(int i=0;i<n;i++){
       
        
    cout<<fibonicci(i)<<endl;}
    
   
    
}
