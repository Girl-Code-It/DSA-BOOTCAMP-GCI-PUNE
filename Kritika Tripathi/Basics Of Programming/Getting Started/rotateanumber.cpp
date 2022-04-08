#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    int temp = n, count = 0;
    while(temp>0){
        count++;
        temp/=10;
    }
    temp = n;
    int ten=1,digits, original=1;
    for(int i=1; i<=k; i++){
        ten*=10;
    }
    for(int i=1; i<=count-k; i++){
        original*=10;
    }
    digits=temp%ten; //456
    temp/=ten; //123
    digits*=original; //456000
    digits+=temp; ///456123
    cout<<digits<<endl;
    return 0;
}