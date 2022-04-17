#include <iostream>
using namespace std;

int factorial(int n){
    if(n==1){
        return 1;
    }
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    int n;
    cin >> n;

    int ans;
    
    //write your code here
    for(int i=0; i<=n; i++){
        for(int j=0; j<=i; j++){
            if(j==0 || j==i){
                cout<<"1\t";
            }
            else{
                ans = factorial(i)/(factorial(j)*factorial(i-j));
                cout<<ans<<"\t";
            }
        }
        cout<<endl;
    }
}
