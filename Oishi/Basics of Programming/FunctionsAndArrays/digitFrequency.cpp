#include<iostream>
using namespace std;
int digFreq(int n, int d) {
  //write your code here
  int end;
  int count = 0;
  while (n) {
      int end = n % 10;
      n = n / 10;
      if (end == d)
        count++;
  }
  return count;
}

int main() {
  int n, d;
  cin >> n >> d;
  int res = digFreq(n, d);
  cout << res << endl;
}