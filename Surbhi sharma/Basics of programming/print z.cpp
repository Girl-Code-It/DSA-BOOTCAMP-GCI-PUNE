#include<iostream>
using namespace std;
int main(int argc, char** agrc) {
  //write your code here
  for(int i=0;i<5;i++){
      if(i==0 || i==4){
        for(int j=0;j<5;j++){
            cout<<"*";  
        }
      }
      else{
          for(int k=0;k<5-i-1;k++){
              cout<<" ";
          }
          cout<<"*";
      }
      cout<<endl;
  }

}
