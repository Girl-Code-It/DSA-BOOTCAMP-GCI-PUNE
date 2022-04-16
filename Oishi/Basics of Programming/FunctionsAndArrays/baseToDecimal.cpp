#include<iostream>
using namespace std;
int AnyToDec(int n, int b) {
    //write your code here.
    int power = 1;
    int result = 0;
    int end;
    
    while(n) {
        end = n % 10;
        n = n / 10;
        result = result + (end*power);
        power *= b;
    }
    return result;
}
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  int res = AnyToDec(n, b);
  cout << res << endl;
}