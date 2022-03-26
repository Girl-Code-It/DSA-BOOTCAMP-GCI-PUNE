#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

  while(n!=0){
      int last_digit=n%10;
      cout<<last_digit<<endl;
      n/=10;
      
  }
    
}
