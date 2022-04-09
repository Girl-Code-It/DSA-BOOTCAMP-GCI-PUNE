#include <iostream>
using namespace std;
bool isprime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(int argc, char **argv){
    int low, high;
    cin >> low >> high;
    // vector<int> v;
    
    //write your code here
    for(int i=low;i<=high;i++){
        if(isprime(i)){
            cout<<i<<endl;
        }
    }
    

}
