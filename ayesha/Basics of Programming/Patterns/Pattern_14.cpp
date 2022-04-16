#include<iostream>
using namespace std;
int main(int agrc, char** argv){
    int n;
    cin >> n;
    //write your code here
    for(int i=1;i<=10;i++){
        cout<<n<<" * "<<i<<" = "<<n*i;
        cout<<"\n";
    }
    return 0;
}