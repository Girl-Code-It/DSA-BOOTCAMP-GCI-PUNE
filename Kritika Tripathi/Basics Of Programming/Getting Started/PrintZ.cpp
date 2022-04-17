#include<iostream>
using namespace std;
int main() {
  //write your code here
  for(int i=1; i<=5; i++){
      for(int j=1; j<=5; j++){
          if(i==1 || i==5){
              cout<<"*\t";
          }
          else if((i+j)==6){
              cout<<"*\t";
          }
          else{
              cout<<"\t";
          }
      }
      cout<<endl;
  }

}