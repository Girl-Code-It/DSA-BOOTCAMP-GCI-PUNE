#include<iostream>
#include <sstream>
#include<cmath>
using namespace std;
int DecToAny(int n, int b)
{
string s="";
 int x=0;
    while(n>0){
        s=to_string(n%b)+s;
        n=n/b;
    }
    stringstream res(s);
    res>>x;
    return x;
}
int AnyToDec(int n, int b)
{
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
int AnyToAny(int n, int b1, int b2) {
  //write your code here
  int a=AnyToDec(n,b1);
  int b=DecToAny(a,b2);
  return b;
}
int main() {
  int n;
  int b1;
  int b2;
  cin >> n;
  cin >> b1;
  cin >> b2;
  int res = AnyToAny(n, b1, b2);
  cout << res << endl;
}
