#include<iostream>
using namespace std;

int AnyToDec(int n, int b) {
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

int DecToAny(int n, int b) {
    int power = 1;
    int result = 0;
    int end;
    
    while(n) {
        end = n % b;
        n = n / b;
        result = result + (end*power);
        power *= 10;
    }
    return result;
}

int AnyToAny(int n, int b1, int b2) {
  //write your code here
  return DecToAny(AnyToDec(n, b1), b2);
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