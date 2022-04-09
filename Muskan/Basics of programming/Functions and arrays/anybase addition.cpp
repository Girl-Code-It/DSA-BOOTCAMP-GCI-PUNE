#include<iostream>

using namespace std;

int getSum(int b, int n1, int n2) {
    int carry=0;
    int ans=0;
    int pow=1;
   while(n1!=0 ||n2!=0||carry!=0){
       int last1=n1%10;
       int last2=n2%10;
       n1/=10;
       n2/=10;
       int sum=last1+last2+carry;
       int q=sum/b;
       int rem=sum%b;
       ans+=(rem*pow);
       pow*=10;
       carry=q;
   }
   return ans;
    
}


int main() {
    int b, n1, n2;
    cin >> b >> n1 >> n2;
    cout << getSum(b, n1, n2) << endl;
}
