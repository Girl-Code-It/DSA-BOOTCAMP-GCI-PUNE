#include<iostream>
using namespace std;
int DecToAny(int n, int b) {
  int ans=0;
  int pow=1;
  while(n!=0){
      int r=n%b;
      n/=b;
      ans+=r*pow;
      pow*=10;
  }
  return ans;
    
    
    
    
}
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  int res = DecToAny(n, b);
  cout << res << endl;
}
