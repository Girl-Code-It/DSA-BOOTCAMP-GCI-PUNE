#include<iostream>
using namespace std;
int digFreq(int n, int d) {
  int temp=n;
  int count=0;
  while(temp!=0){
      if(temp%10==d){
          count++;
      }
      temp=temp/10;
  }
  return count;
}
int main() {
  int n, d;
  cin >> n >> d;
  int res = digFreq(n, d);
  cout << res << endl;
}
