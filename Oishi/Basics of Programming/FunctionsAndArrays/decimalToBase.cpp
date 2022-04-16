#include<iostream>
using namespace std;
int DecToAny(int n, int b) {
    //write your code here
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

int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  int res = DecToAny(n, b);
  cout << res << endl;
}