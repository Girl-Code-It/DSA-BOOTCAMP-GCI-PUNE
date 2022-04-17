#include<bits/stdc++.h>
using namespace std;
int DecToAny(int n, int b) {
//write your code here
int temp = n, res=0, ten=1;
while(temp>0){
    int rem = temp%b; //5%2=1 // 2%2=0 //1%2=1
    res += rem*ten; // 1 //  //
    temp/=b; //2 //1 //0
    ten*=10; //0 //1 //2 //3
}
return res;
}
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  int res = DecToAny(n, b);
  cout << res << endl;
}