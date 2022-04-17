#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    //write your code here
    for(int i=2; i<=n; i++){
        while(n%i==0){
                cout<<i<<endl;
            n/=i;
        }
    }
    return 0;
}
