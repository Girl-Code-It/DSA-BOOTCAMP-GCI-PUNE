#include<iostream>

using namespace std;
int anytodec(int n, int b){
    int temp = n, base=1, rem, res=0;
    while(temp>0){
        rem = temp%10;//1 //0 //0 //1 //1 //1
        rem*=base;//1 //0 //0 //8 //16 //32
        res+=rem;//1 //1 //1 //9 //25 //57
        temp/=10;//11100 //1110 //111 //11 //1 //0
        base*=b;//2 //4 //8 //16 //32 //64
    }
    return res;
}

int dectoany(int n, int b){
    int temp = n, res=0, ten=1;
    while(temp>0){
        int rem = temp%b; //5%2=1 // 2%2=0 //1%2=1
        res += rem*ten; // 1 //  //
        temp/=b; //2 //1 //0
        ten*=10; //0 //1 //2 //3
    }
    return res;
}

int getSum(int b, int n1, int n2) {
    // write your code here
    int m = anytodec(n1, b);
    int n = anytodec(n2, b);
    int sum = m + n;
    int ans = dectoany(sum, b);
    return ans;
}


int main() {
    int b, n1, n2;
    cin >> b >> n1 >> n2;
    cout << getSum(b, n1, n2) << endl;
    return 0;
}