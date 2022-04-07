#include <iostream>
using namespace std;

bool IsPrime(int& n){
    
    for(int div = 2; div*div <= n; div++){
        if(n % div == 0){
            return false;
        }
    }
    
    return true;
    
}

int main(int argc, char **argv){
    int low, high;
    cin >> low >> high;

    //write your code here
    
    for(int num=low; num <= high; num++){
        if(IsPrime(num))
            cout << num << endl;
    }

}
