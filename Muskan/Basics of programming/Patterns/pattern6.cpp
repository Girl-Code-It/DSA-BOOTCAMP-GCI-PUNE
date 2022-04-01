#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

  int spaces=1;
  int stars=n/2+1;
  for(int i=1;i<=n;i++){
      for(int j=1;j<=stars;j++){
          cout<<"*\t";
      }
      for(int j=1;j<=spaces;j++){
          cout<<"\t";
      }
      for(int j=1;j<=stars;j++){
          cout<<"*\t";
      }
      cout<<endl;
      if(i<=n/2){
          spaces+=2;
          stars--;
      }
      else{
          spaces-=2;
          stars++;
      }
  }
    
}
