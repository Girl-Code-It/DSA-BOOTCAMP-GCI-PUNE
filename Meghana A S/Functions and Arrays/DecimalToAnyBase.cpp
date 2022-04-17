#include<iostream>
#include <sstream>
using namespace std;
int DecToAny(int n, int b) {
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
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  int res = DecToAny(n, b);
  cout << res << endl;
}
