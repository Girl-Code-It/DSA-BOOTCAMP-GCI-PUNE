#include<iostream>
using namespace std;
int digFreq(int n, int d) {
  //write your code here
  int temp = n;
  int count = 0;
  for(int i=1; temp>0; i++){
      int rem = temp%10;
      if(rem==d){
          count++;
      }
      temp/=10;
  }
  return count;
}
int main() {
  int n, d;
  cin >> n >> d;
  int res = digFreq(n, d);
  cout << res << endl;
}