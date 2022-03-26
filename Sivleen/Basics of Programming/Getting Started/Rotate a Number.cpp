#include <iostream>
#include<cmath>

using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    
    int newNum = n, temp =n,len=0;
    while(temp>0){
        len++;
        temp=temp/10;
    }
    k=k%len;
    if(k>0){
        int left = n%(static_cast<int>(pow(10,k)));
        int right = n/(static_cast<int>(pow(10,k)));
        newNum= (left*(static_cast<int>(pow(10,len-k)))) + right;
    }
    else if(k<0){
        k=abs(k);
        int right = n/(static_cast<int>(pow(10,len-k)));
        int left = n%(static_cast<int>(pow(10,len-k)));
        newNum = (left*(static_cast<int>(pow(10,k)))) + right;
    }
    cout<< newNum <<"\n";
}