#include <iostream>
using namespace std;
int main(int argc, char**argv){
    int n;
    cin >> n;

 int stars=1;
   int spaces=n/2;
   int out=1;
   for(int i=1;i<=n;i++){
       int in=out;
       for(int j=1;j<=spaces;j++){
           cout<<"\t";
       }
        for(int j=1;j<=stars;j++){
           
           cout<<in<<"\t";
           if(j<=stars/2)
             in++;
             else{
                 in--;
             }
       }
       cout<<endl;
       if(i<=n/2){
           spaces--;
           stars+=2;
           out++;
       }
       else{
           spaces++;
           stars-=2;
           out--;
       }
       
   }
    
}
