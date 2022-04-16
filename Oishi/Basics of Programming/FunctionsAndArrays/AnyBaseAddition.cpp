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

int getSum(int b, int n1, int n2) {
    // write your code here
    n1 = AnyToDec(n1, b);
    n2 = AnyToDec(n2, b);
    int result = n1 + n2;
    return DecToAny(result, b);
    
}


int main() {
    int b, n1, n2;
    cin >> b >> n1 >> n2;
    cout << getSum(b, n1, n2) << endl;
}