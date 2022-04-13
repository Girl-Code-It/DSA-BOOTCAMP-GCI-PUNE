#include<iostream>
using namespace std;
int AnyToDec(int n, int b) {
//write your code here.
int temp = n, base=1, rem, res;
while(temp>0){
    rem = temp%10;//1 //0 //0 //1 //1 //1
    rem*=base;//1 //0 //0 //8 //16 //32
    res+=rem;//1 //1 //1 //9 //25 //57
    temp/=10;//11100 //1110 //111 //11 //1 //0
    base*=b;//2 //4 //8 //16 //32 //64
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