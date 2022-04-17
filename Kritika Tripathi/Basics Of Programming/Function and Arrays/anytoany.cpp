#include<iostream>
using namespace std;
long int AnyToAny(int n, int b1, int b2) {
  //write your code here
  int temp = n, rem, res=0, base=1;
  while(temp>0){
    rem = temp%10;//1 //0 //0 //1 //1 //1
    rem*=base;//1 //0 //0 //8 //16 //32
    res+=rem;//1 //1 //1 //9 //25 //57
    temp/=10;//11100 //1110 //111 //11 //1 //0
    base*=b1;//2 //4 //8 //16 //32 //64
  }
  temp = res;
  int ten=1;
  long int ans = 0;
while(temp>0){
    rem = temp%b2; //0 //1
    ans += rem*ten; //0 //
    temp/=b2; //19
    ten*=10; //10
}
return ans;

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