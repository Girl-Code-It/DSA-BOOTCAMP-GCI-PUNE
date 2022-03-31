#include<iostream>
using namespace std;
int AnyToDec(int n, int b) {
int ans=0;
int pow=1;
while(n!=0){
    int rem=n%10;
    n/=10;
    ans+=rem*pow;
    pow*=b;
}
return ans;
}
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  int res = AnyToDec(n, b);
  cout << res << endl;
}
