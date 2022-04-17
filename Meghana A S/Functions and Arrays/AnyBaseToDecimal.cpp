#include<iostream>
#include<cmath>
using namespace std;
int AnyToDec(int n, int b) {
//write your code here.
int res=0,i=0;
while(n>0)
{
    int dig=n%10;
    res=res+dig*pow(b,i);
    i++;
    n=n/10;
}
return res;
}
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  int res = AnyToDec(n, b);
  cout << res << endl;
}
