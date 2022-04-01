#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

   int counter=1;
   int sum=0;
   while(n!=0){
      
       int r=n%10;
        n/=10;
       sum+=counter*pow(10,r-1);
       counter++;
      
   }
   cout<<sum<<endl;
    
}
